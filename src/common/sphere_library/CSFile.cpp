
#ifndef _WIN32
	#include <errno.h>	// errno
	#include <sys/types.h>
	#include <sys/stat.h>
#endif
#include "../../sphere/threads.h"
#include "../CLog.h"
#include "CSFile.h"


// CSFile:: Constructors, Destructor, Asign operator.

CSFile::CSFile()
{
    _fileDescriptor = _kInvalidFD;
    _uiMode = 0;
}

CSFile::~CSFile()
{
    CSFile::Close();
}


// CSFile:: Error Logging.

int CSFile::GetLastError()
{
#ifdef _WIN32
    return ::GetLastError();
#else
    return errno;
#endif
}

void CSFile::_NotifyIOError( lpctstr szMessage ) const
{
    ADDTOCALLSTACK("CSFile::_NotifyIOError");
    int iErrorCode = GetLastError();
#ifdef _WIN32
    lpctstr pMsg;
    LPVOID lpMsgBuf;
    //FormatMessage(FORMAT_MESSAGE_ALLOCATE_BUFFER| FORMAT_MESSAGE_FROM_SYSTEM|FORMAT_MESSAGE_IGNORE_INSERTS, NULL, iErrorCode, 0, reinterpret_cast<LPTSTR>(&lpMsgBuf), 0, NULL );
    FormatMessage(FORMAT_MESSAGE_ALLOCATE_BUFFER|FORMAT_MESSAGE_FROM_SYSTEM|FORMAT_MESSAGE_IGNORE_INSERTS, NULL, iErrorCode, MAKELANGID(0x9,0x1), //en-US
        reinterpret_cast<LPTSTR>(&lpMsgBuf), 0, NULL );
    if (lpMsgBuf == nullptr)
        pMsg = "No System Error";
    else
        pMsg = static_cast<lptstr>(lpMsgBuf);
    DEBUG_ERR(( "File I/O \"%s\" failed on file \"%s\" (%lX): %s", szMessage, static_cast<lpctstr>(_strFileName), iErrorCode, pMsg ));
    if (lpMsgBuf != nullptr)
        LocalFree( lpMsgBuf );
#else
    DEBUG_ERR(( "File I/O \"%s\" failed on file \"%s\" (%lX): %s", szMessage, static_cast<lpctstr>(_strFileName), iErrorCode, strerror(iErrorCode) ));
#endif
}

// CSFile:: File Management.

void CSFile::_Close()
{
    ADDTOCALLSTACK_INTENSIVE("CSFile::_Close");
    if ( ! CSFile::_IsFileOpen() )
        return;

#ifdef _WIN32
    CloseHandle( _fileDescriptor );
#else
    close( _fileDescriptor );
#endif
    _fileDescriptor = _kInvalidFD;
}

void CSFile::Close()
{
    ADDTOCALLSTACK_INTENSIVE("CSFile::Close");

    THREAD_UNIQUE_LOCK_SET;
    CSFile::_Close();
}

bool CSFile::_Open( lpctstr ptcFilename, uint uiModeFlags )
{
    ADDTOCALLSTACK_INTENSIVE("CSFile::_Open");
    // RETURN: true = success.
    // OF_BINARY | OF_WRITE
    if ( !ptcFilename )
    {
        if ( CSFile::_IsFileOpen() )
            return true;
    }
    else
    {
        CSFile::_Close();	// Make sure it's closed first.
    }

    if ( !ptcFilename )
        ptcFilename = _strFileName.GetPtr();
    else
        _strFileName = ptcFilename;

    if ( _strFileName.IsEmpty() )
        return false;

    _uiMode = uiModeFlags;

#ifdef _WIN32
    DWORD dwShareMode, dwCreationDisposition, dwDesiredAccess;

    dwDesiredAccess = GENERIC_READ;
    if ( uiModeFlags & OF_WRITE )
        dwDesiredAccess |= GENERIC_WRITE;
    if ( uiModeFlags & OF_READWRITE )
        dwDesiredAccess |= (GENERIC_READ | GENERIC_WRITE);

    if ( uiModeFlags & OF_SHARE_COMPAT )
        dwShareMode = (FILE_SHARE_READ | FILE_SHARE_WRITE);
    else if ( uiModeFlags & OF_SHARE_EXCLUSIVE )
        dwShareMode = 0;
    else if ( uiModeFlags & OF_SHARE_DENY_WRITE )
        dwShareMode = FILE_SHARE_READ;
    else if ( uiModeFlags & OF_SHARE_DENY_READ )
        dwShareMode = FILE_SHARE_WRITE;
    else if ( uiModeFlags & OF_SHARE_DENY_NONE )
        dwShareMode = (FILE_SHARE_READ | FILE_SHARE_WRITE);
    else
        dwShareMode = 0;

    if ( uiModeFlags & OF_CREATE )
        dwCreationDisposition = (OPEN_ALWAYS|CREATE_NEW);
    else
        dwCreationDisposition = OPEN_EXISTING;

    _fileDescriptor = CreateFile( ptcFilename, dwDesiredAccess, dwShareMode, NULL, dwCreationDisposition, FILE_ATTRIBUTE_NORMAL, NULL );
#else
    _fileDescriptor = open( ptcFilename, uiModeFlags );
#endif // _WIN32

    return (_fileDescriptor != _kInvalidFD);
}

bool CSFile::Open( lpctstr ptcFilename, uint uiModeFlags )
{
    ADDTOCALLSTACK_INTENSIVE("CSFile::Open");
    THREAD_UNIQUE_LOCK_RETURN(CSFile::_Open(ptcFilename, uiModeFlags));
}

bool CSFile::_IsFileOpen() const
{
    return (_fileDescriptor != _kInvalidFD);
}
bool CSFile::IsFileOpen() const
{
    THREAD_SHARED_LOCK_RETURN(_fileDescriptor != _kInvalidFD);
}

lpctstr CSFile::_GetFilePath() const
{
    return _strFileName.GetPtr();
}
lpctstr CSFile::GetFilePath() const
{
    THREAD_SHARED_LOCK_RETURN(_strFileName.GetPtr());
}

bool CSFile::_SetFilePath( lpctstr pszName )
{
    ADDTOCALLSTACK_INTENSIVE("CFile::_SetFilePath");
    if ( pszName == nullptr )
        return false;
    if ( ! _strFileName.CompareNoCase( pszName ))
        return true;

    bool fIsOpen = ( _fileDescriptor != _kInvalidFD);
    if ( fIsOpen )
        _Close();
    _strFileName = pszName;
    if ( fIsOpen )
        return _Open(); // _GetMode()	// open it back up. (in same mode as before)
    return true;
}

bool CSFile::SetFilePath( lpctstr pszName )
{
    ADDTOCALLSTACK_INTENSIVE("CFile::SetFilePath");
    THREAD_UNIQUE_LOCK_RETURN(CSFile::_SetFilePath(pszName));
}


// CFile:: Content management.

int CSFile::_GetLength()
{
    ADDTOCALLSTACK_INTENSIVE("CSFile::_GetLength");
    bool fOpenClose = false;
    if ( _fileDescriptor == _kInvalidFD )
    {
        // Happens with a CCacheableScriptFile
        fOpenClose = true;
        CSFile::_Open();
    }
	// Get the size of the file.
    int iPos = CSFile::_GetPosition();   // save current pos.
    int iSize = CSFile::_SeekToEnd();
	CSFile::_Seek( iPos, SEEK_SET );     // restore previous pos.
    if (fOpenClose)
    {
        CSFile::_Close();
    }
	return iSize;
}

int CSFile::GetLength()
{
    ADDTOCALLSTACK_INTENSIVE("CSFile::GetLength");
    THREAD_UNIQUE_LOCK_RETURN(CSFile::_GetLength());
}

int CSFile::_GetPosition() const
{
    ADDTOCALLSTACK_INTENSIVE("CSFile::_GetPosition");
#ifdef _WIN32
    DWORD ret = SetFilePointer( _fileDescriptor, 0, NULL, FILE_CURRENT );
    if (ret == INVALID_SET_FILE_POINTER)
    {
        _NotifyIOError("CFile::GetPosition");
        return 0;
    }
#else
	off_t ret = lseek( _fileDescriptor, 0, SEEK_CUR );
    if (ret == (off_t)-1)
    {
        _NotifyIOError("CFile::GetPosition");
        return 0;
    }
#endif
    if (ret > INT_MAX)
    {
        _NotifyIOError("CFile::GetPosition (length)");
        return 0;
    }
    return (int)ret;
}
int CSFile::GetPosition() const
{
    ADDTOCALLSTACK_INTENSIVE("CSFile::GetPosition");
    THREAD_UNIQUE_LOCK_RETURN(CSFile::_GetPosition());
}

int CSFile::Read( void * pData, int iLength ) const
{
    ADDTOCALLSTACK_INTENSIVE("CSFile::Read");
    THREAD_UNIQUE_LOCK_SET;

#ifdef _WIN32
	DWORD ret;
	if ( !::ReadFile( _fileDescriptor, pData, (DWORD)iLength, &ret, NULL ) )
	{
		_NotifyIOError("CFile::Read");
		return 0;
	}
#else
	ssize_t ret = read(_fileDescriptor, pData, iLength);
	if (ret == -1)
    {
        _NotifyIOError("CFile::Read");
		return 0;
    }
#endif
    if (ret > INT_MAX)
    {
        _NotifyIOError("CFile::Read (length)");
        return 0;
    }
    return (int)ret;
}

int CSFile::_Seek( int iOffset, int iOrigin )
{
    ADDTOCALLSTACK_INTENSIVE("CSFile::_Seek");
	if ( _fileDescriptor == _kInvalidFD )
    {
        _NotifyIOError("CFile::Seek");
        return -1;
    }

#ifdef _WIN32
	DWORD ret = SetFilePointer( _fileDescriptor, (LONG)iOffset, NULL, (DWORD)iOrigin );
#else
	off_t ret = lseek( _fileDescriptor, iOffset, iOrigin );
#endif
    if (ret > INT_MAX)
    {
        _NotifyIOError("CFile::Seek (length)");
        return 0;
    }
    return (int)ret;
}

int CSFile::Seek( int iOffset, int iOrigin )
{
    ADDTOCALLSTACK_INTENSIVE("CSFile::Seek");
    THREAD_UNIQUE_LOCK_RETURN(CSFile::_Seek(iOffset, iOrigin));
}

void CSFile::_SeekToBegin()
{
    ADDTOCALLSTACK_INTENSIVE("CSFile::_SeekToBegin");
    _Seek( 0, SEEK_SET );
}
void CSFile::SeekToBegin()
{
    ADDTOCALLSTACK_INTENSIVE("CSFile::SeekToBegin");
	Seek( 0, SEEK_SET );
}

int CSFile::_SeekToEnd()
{
    ADDTOCALLSTACK_INTENSIVE("CSFile::_SeekToEnd");
    return _Seek( 0, SEEK_END );
}
int CSFile::SeekToEnd()
{
    ADDTOCALLSTACK_INTENSIVE("CSFile::SeekToEnd");
	return Seek( 0, SEEK_END );
}

bool CSFile::Write( const void * pData, int iLength )
{
    ADDTOCALLSTACK_INTENSIVE("CSFile::Write");
    THREAD_UNIQUE_LOCK_SET;

#ifdef _WIN32
	DWORD dwWritten;
	BOOL ret = ::WriteFile( _fileDescriptor, pData, (DWORD)iLength, &dwWritten, NULL );
	if ( ret == FALSE )
	{
		_NotifyIOError("CFile::Write");
		return false;
	}
	return true;
#else
	ssize_t ret = write(_fileDescriptor, (const char *)pData, iLength);
	if (ret == (ssize_t)-1 || ret != iLength)
    {
        _NotifyIOError("CFile::Write");
		return false;
    }
	return true;
#endif
}

// CSFile:: File name operations.

lpctstr CSFile::GetFilesTitle( lpctstr pszPath )  // static
{
	ADDTOCALLSTACK_INTENSIVE("CSFile::GetFilesTitle");
	// strrchr
	size_t len = strlen(pszPath);
	while ( len > 0 )
	{
		--len;
		if ( pszPath[len] == '\\' || pszPath[len] == '/' )
		{
			++len;
			break;
		}
	}
	return (pszPath + len);
}

lpctstr CSFile::_GetFileTitle() const
{
    ADDTOCALLSTACK("CFile::_GetFileTitle");
    return CSFile::GetFilesTitle(_strFileName.GetPtr());
}
lpctstr CSFile::GetFileTitle() const
{
    ADDTOCALLSTACK("CFile::GetFileTitle");
    return CSFile::GetFilesTitle( GetFilePath() );
}

lpctstr CSFile::GetFilesExt( lpctstr pszName )	// static
{
	ADDTOCALLSTACK("CSFile::GetFilesExt");
    // get the EXTension including the .
	size_t len = strlen( pszName );
	while ( len > 0 )
	{
		--len;
		if ( pszName[len] == '\\' || pszName[len] == '/' )
			break;
		if ( pszName[len] == '.' )
		{
			return ( pszName + len );
		}
	}
	return nullptr;	// has no ext.
}

lpctstr CSFile::GetFileExt() const
{
    ADDTOCALLSTACK("CSFile::GetFileExt");
    // get the EXTension including the .
    return GetFilesExt(GetFilePath());
}


CSString CSFile::GetMergedFileName( lpctstr pszBase, lpctstr pszName ) // static
{
	ADDTOCALLSTACK("CSFile::GetMergedFileName");
    // Merge path and file name.

	tchar ptcFilePath[ _MAX_PATH ];
    size_t len = 0;
	if ( pszBase && pszBase[0] )
	{
		strncpy( ptcFilePath, pszBase, sizeof(ptcFilePath) );
		len = strlen(ptcFilePath);
		if (len && ptcFilePath[len - 1] != '\\' && ptcFilePath[len - 1] != '/')
		{
#ifdef _WIN32
			strcat(ptcFilePath, "\\");
#else
			strcat(ptcFilePath, "/");
#endif
		}
	}
	else
	{
        ptcFilePath[0] = '\0';
	}
	if ( pszName )
	{
		strncat(ptcFilePath, pszName, sizeof(ptcFilePath)-len);
	}
	return CSString(ptcFilePath);
}

// CSFile:: Mode operations.

uint CSFile::_GetFullMode() const
{
    return _uiMode;
}
uint CSFile::GetFullMode() const
{
    THREAD_SHARED_LOCK_RETURN(_uiMode);
}

uint CSFile::_GetMode() const
{
    return (_uiMode & 0x0FFFFFFF);
}
uint CSFile::GetMode() const
{
    THREAD_SHARED_LOCK_RETURN(_uiMode & 0x0FFFFFFF);
}

bool CSFile::_IsWriteMode() const
{
    return (_uiMode & OF_WRITE);
}
bool CSFile::IsWriteMode() const
{
    THREAD_SHARED_LOCK_RETURN(_uiMode & OF_WRITE);
}
