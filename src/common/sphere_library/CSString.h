/**
* @file CSString.
* @brief Custom string implementation.
*/

#ifndef _INC_CSSTRING_H
#define _INC_CSSTRING_H

#ifdef __MINGW32__
	#include <cstdio>
#endif // __MINGW32__
#include <cstdarg>		// needed for va_list

#include "sstring.h"

/**
* @brief Custom String implementation.
*/
class CSString
{
public:
	static const char *m_sClassName;

	/** @name Constructors, Destructor, Asign operator:
	 */
	///@{

	/**
	* @brief Default constructor.
	*
	* Initializes string. If DEBUG_STRINGS setted, update statistical information (total CSString instantiated).
	* @see Init()
	*/
	inline CSString();

	/**
	* @brief CSString destructor.
	*
	* If DEBUG_STRINGS setted, updates statistical information (total CSString instantiated).
	*/
	inline ~CSString();

    /**
    * @brief Copy constructor.
    *
    * @see Copy()
    * @param pStr string to copy.
    */
    inline CSString(lpctstr pStr);

    /**
    * @brief Copy constructor.
    *
    * @see CopyLen()
    * @param pStr string to copy.
    * #param iLen max number of chars (single-byte) to copy.
    */
    inline CSString(lpctstr pStr, int iLen);

	/**
	* @brief Copy constructor.
	*
	* @see Copy()
	* @param pStr string to copy.
	*/
    inline CSString(const CSString &s);

	/**
	* @brief Copy supplied string into the CSString.
	* @param pStr string to copy.
	* @return the CSString.
	*/
	const CSString& operator=(lpctstr pStr);

	/**
	* @brief Copy supplied CSString into the CSString.
	* @param s CSString to copy.
	* @return the CSString.
	*/
	const CSString& operator=(const CSString &s);

	///@}

	/** @name Capacity:
	 */
	///@{
	/**
	* @brief Sets length to zero.
	*
	* If fTotal is true, then free the memory allocated. If DEBUG_STRINGS setted, update statistical information (total memory allocated).
	* @param fTotal true for free the allocated memory.
	*/
	void Clear(bool fTotal = false);

	/**
	* @brief Check the length of the CSString.
	* @return true if length is 0, false otherwise.
	*/
	inline bool IsEmpty() const;

	/**
	* @brief Check if there is data allocated and if has zero length.
	* @return false if no data or zero length, true otherwise.
	*/
	bool IsValid() const;

	/**
	* @brief Change the capacity (which is not the actual string length) of the CSString internal buffer.
	*
	* If the new length is lesser than the current length, only set a zero at the end of the string.
	* If the new length is bigger than the current length, alloc memory for the string and copy.
	* If DEBUG_STRINGS setted, update statistical information (reallocs count, total memory allocated).
	* @param iLen new length of the string.
	* @return the new length of the CSString.
	*/
	int Resize(int iLen);

	/**
	* @brief Get the length of the held string.
	* @return the length of the CSString.
	*/
	inline int GetLength() const;

	/**
	* @brief Get the length of the internal buffer, which can be greater than the held string length.
	* @return the length of the CSString.
	*/
	inline int GetCapacity() const;

	///@}

	/** @name Element access:
	 */
	///@{

	/**
	* @brief Gets the caracter in a specified position (0 based).
	* @see GetAt()
	* @param nIndex position of the character.
	* @return character in position nIndex.
	*/
	inline tchar operator[](int nIndex) const;

	/**
	* @brief Gets the reference to character a specified position (0 based).
	* @see ReferenceAt()
	* @param nIndex position of the character.
	* @return reference to character in position nIndex.
	*/
	inline tchar& operator[](int nIndex);

	/**
	* @brief Gets the caracter in a specified position (0 based).
	* @param nIndex position of the character.
	* @return character in position nIndex.
	*/
	inline tchar GetAt(int nIndex) const;

	/**
	* @brief Gets the reference to character a specified position (0 based).
	* @param nIndex position of the character.
	* @return reference to character in position nIndex.
	*/
	inline tchar& ReferenceAt(int nIndex);

	/**
	* @brief Puts a character in a specified position (0 based).
	*
	* If character is 0, updates the length of the string (truncated).
	* @param nIndex position to put the character.
	* @param ch character to put.
	*/
	void SetAt(int nIndex, tchar ch);

	///@}

	/** @name Modifiers:
	 */
	///@{

	/**
	* @brief Concatenate CSString with a string.
	* @param pointer to zero-terminated tchar string to concatenate with.
	* @return The result of concatenate the CSString with string.
	*/
	const CSString& operator+=(lpctstr string);

    /**
    * @brief Concatenate CSString with a string.
    * @param pointer to zero-terminated tchar string to concatenate with.
    * @return The result of concatenate the CSString with string.
    */
	CSString operator+(lpctstr string);

	/**
	* @brief Concatenate CSString with a character.
	* @param ch character to concatenate with.
	* @return The result of concatenate the CSString with ch.
	*/
	const CSString& operator+=(tchar ch);

	/**
	* @brief Adds a char at the end of the CSString.
	* @param ch character to add.
	*/
	void Add(tchar ch);

	/**
	* @brief Adds a string at the end of the CSString.
	* @parampszStrh string to add.
	*/
	void Add(lpctstr pszStr);

	/**
	* @brief Copy a string into the CSString.
	* @see SetLength()
	* @see strcpy()
	* @param pStr string to copy.
	*/
	void Copy(lpctstr pStr);

    /**
    * @brief Copy a string of known length into the CSString.
    * @see SetLength()
    * @see Str_CopyLimitNull()
    * @param pStr string to copy.
    * @param iLen max number of chars (single-byte) to copy.
    */
    void CopyLen(lpctstr pStr, int iLen);

	/**
	* @brief Changes the capitalization of CSString to upper.
	*/
	inline void MakeUpper();

	/**
	* @brief Changes the capitalization of CSString to lower.
	*/
	inline void MakeLower();

	/**
	* @brief Reverses the CSString.
	*/
	inline void Reverse();

	///@}

	/** @name String formatting:
	*/
	///@{

	/**
	* @brief Join a formated string (printf like) with values and copy into this.
	* @see FormatV()
	* @param pStr formatted string.
	* @param ... list of values.
	*/
	void _cdecl Format(lpctstr pStr, ...) __printfargs(2, 3);

    /**
    * @brief Join a formated string (printf like) with values and copy into this.
    * @param pStr formated string.
    * @param args list of values.
    */
    void FormatV(lpctstr pStr, va_list args);

    /**
    * @brief Print a llong value into the string (hex format).
    * @see Format()
    * @param iVal value to print.
    */
    void FormatLLHex(llong iVal);

	/**
	* @brief Print a ullong value into the string (hex format).
	* @see Format()
	* @param uiVal value to print.
	*/
    void FormatULLHex(ullong uiVal);

    /**
    * @brief Print a dword value into the string (hex format).
    * @see Format()
    * @param dwVal value to print.
    */
    void FormatHex(dword dwVal);

	
	/**
	* @brief Print a char value into the string.
	* @see Format()
	* @param iVal value to print.
	*/
    void FormatCVal(char iVal);

	/**
	* @brief Print a unsigned char value into the string.
	* @see Format()
	* @param iVal value to print.
	*/
    void FormatUCVal(uchar uiVal);

	/**
	* @brief Print a short value into the string.
	* @see Format()
	* @param iVal value to print.
	*/
    void FormatSVal(short iVal);

	/**
	* @brief Print a unsigned short value into the string.
	* @see Format()
	* @param iVal value to print.
	*/
    void FormatUSVal(ushort uiVal);

	/**
	* @brief Print a long value into the string.
	* @see Format()
	* @param iVal value to print.
	*/
    void FormatVal(int iVal);

	/**
	* @brief Print a unsigned int value into the string.
	* @see Format()
	* @param iVal value to print.
	*/
    void FormatUVal(uint uiVal);

	/**
	* @brief Print a llong value into the string.
	* @see Format()
	* @param iVal value to print.
	*/
    void FormatLLVal(llong iVal);

	/**
	* @brief Print a ullong value into the string.
	* @see Format()
	* @param iVal value to print.
	*/
    void FormatULLVal(ullong uiVal);

	/**
	* @brief Print a size_t (unsigned) value into the string.
	* @see Format()
	* @param iVal value to print.
	*/
    void FormatSTVal(size_t uiVal);

	/**
	* @brief Print a byte value into the string.
	* @see Format()
	* @param iVal value to print.
	*/
    void FormatBVal(byte uiVal);

	/**
	* @brief Print a word value into the string.
	* @see Format()
	* @param iVal value to print.
	*/
    void FormatWVal(word uiVal);

	/**
	* @brief Print a dword value into the string.
	* @see Format()
	* @param iVal value to print.
	*/
    void FormatDWVal(dword uiVal);

    /**
    * @brief Print a char value into the string.
    * @see Format()
    * @param iVal value to print.
    */
    void Format8Val(int8 iVal);

    /**
    * @brief Print a unsigned char value into the string.
    * @see Format()
    * @param iVal value to print.
    */
    void FormatU8Val(uint8 uiVal);

    /**
    * @brief Print a short value into the string.
    * @see Format()
    * @param iVal value to print.
    */
    void Format16Val(int16 iVal);

    /**
    * @brief Print a unsigned short value into the string.
    * @see Format()
    * @param iVal value to print.
    */
    void FormatU16Val(uint16 uiVal);

    /**
    * @brief Print a long value into the string.
    * @see Format()
    * @param iVal value to print.
    */
    void Format32Val(int32 iVal);

    /**
    * @brief Print a unsigned int value into the string.
    * @see Format()
    * @param iVal value to print.
    */
    void FormatU32Val(uint32 uiVal);

    /**
    * @brief Print a llong value into the string.
    * @see Format()
    * @param iVal value to print.
    */
    void Format64Val(int64 iVal);

    /**
    * @brief Print a ullong value into the string.
    * @see Format()
    * @param iVal value to print.
    */
    void FormatU64Val(uint64 uiVal);

	///@}

	/** @name String operations:
	 */
	///@{

	/**
	* @brief cast as const lpcstr.
	* @return internal data pointer.
	*/
	inline operator lpctstr() const noexcept;

	/**
	* @brief Compares the CSString to string pStr (strcmp wrapper).
	*
	* This function starts comparing the first character of CSString and the string.
	* If they are equal to each other, it continues with the following
	* pairs until the characters differ or until a terminating null-character
	* is reached. This function performs a binary comparison of the characters.
	* @param pStr string to compare.
	* @return <0 if the first character that not match has lower value in CSString than in pStr. 0 if the contents of both are equal. >0 if the first character that does not match has greater value in CSString than pStr.
	*/
	inline int Compare(lpctstr pStr) const noexcept;

	/**
	* @brief Compares the CSString to string pStr (case insensitive) (_strcmpi wrapper).
	*
	* This function starts comparing the first character of CSString and the string.
	* If they are equal to each other, it continues with the following
	* pairs until the characters differ or until a terminating null-character
	* is reached. This function performs a case insensitive comparison of the characters.
	* @param pStr string to compare.
	* @return <0 if the first character that not match has lower value in CSString than in pStr. 0 if the contents of both are equal. >0 if the first character that does not match has greater value in CSString than pStr.
	*/
	inline int CompareNoCase(lpctstr pStr) const noexcept;

	/**
	* @brief Gets the internal pointer.
	* @return Pointer to internal data.
	*/
	inline lpctstr GetBuffer() const noexcept;
	inline lptstr GetBuffer() noexcept;

	/**
	* @brief Look for the first occurence of c in CSString.
	* @param c character to look for.
	* @return position of the character in CSString if any, -1 otherwise.
	*/
	inline int indexOf(tchar c);

	/**
	* @brief Look for the first occurence of c in CSString from a position.
	* @param c character to look for.
	* @param offset position from start the search.
	* @return position of the character in CSString if any, -1 otherwise.
	*/
	int indexOf(tchar c, int offset);

	/**
	* @brief Look for the first occurence of a substring in CSString.
	* @param str substring to look for.
	* @return position of the substring in CSString if any, -1 otherwise.
	*/
	inline int indexOf(const CSString& str);

	/**
	* @brief Look for the first occurence of a substring in CSString from a position.
	* @param str substring to look for.
	* @param offset position from start the search.
	* @return position of the substring in CSString if any, -1 otherwise.
	*/
	int indexOf(const CSString& str, int offset);

	/**
	* @brief Look for the last occurence of c in CSString.
	* @param c character to look for.
	* @return position of the character in CSString if any, -1 otherwise.
	*/
	inline int lastIndexOf(tchar c);

	/**
	* @brief Look for the last occurence of c in CSString from a position to the end.
	* @param c character to look for.
	* @param from position where stop the search.
	* @return position of the character in CSString if any, -1 otherwise.
	*/
	int lastIndexOf(tchar c, int from);

	/**
	* @brief Look for the last occurence of a substring in CSString.
	* @param str substring to look for.
	* @return position of the substring in CSString if any, -1 otherwise.
	*/
	inline int lastIndexOf(const CSString& str);

	/**
	* @brief Look for the last occurence of a substring in CSString from a position to the end.
	* @param str substring to look for.
	* @param from position where stop the search.
	* @return position of the substring in CSString if any, -1 otherwise.
	*/
	int lastIndexOf(const CSString& str, int from);

	///@}

private:
	/**
	* @brief Initializes internal data.
	*
	* Allocs STRING_DEFAULT_SIZE by default. If DEBUG_STRINGS setted, updates statistical information (total memory allocated).
	*/
	void Init();

	tchar *m_pchData;	// Data pointer.
	int	m_iLength;		// Length of string.
	int	m_iMaxLength;	// Size of memory allocated pointed by m_pchData.
};


/* Inlined methods are defined here */

CSString::CSString()
{
#ifdef DEBUG_STRINGS
    ++gAmount;
#endif
    Init();
}

CSString::~CSString()
{
#ifdef DEBUG_STRINGS
    --gAmount;
#endif
    Clear(true);
}

CSString::CSString(lpctstr pStr)
{
    Init();
    Copy(pStr);
}

CSString::CSString(lpctstr pStr, int iLen)
{
    Init();
    CopyLen(pStr, iLen);
}

CSString::CSString(const CSString &s)
{
    Init();
    Copy(s.GetBuffer());
}

bool CSString::IsEmpty() const
{
	return !m_iLength;
}

int CSString::GetLength() const
{
	return m_iLength;
}

int CSString::GetCapacity() const
{
	return m_iMaxLength;
}

tchar CSString::operator[](int nIndex) const
{
	return GetAt(nIndex);
}

tchar& CSString::operator[](int nIndex)
{
	return ReferenceAt(nIndex);
}

tchar CSString::GetAt(int nIndex) const
{
	ASSERT(nIndex >= 0);
	ASSERT(nIndex <= m_iLength);  // Allow to get the null char.
	return m_pchData[nIndex];
}

tchar& CSString::ReferenceAt(int nIndex)
{
	ASSERT(nIndex >= 0);
	ASSERT(nIndex < m_iLength);
	return m_pchData[nIndex];
}

void CSString::MakeUpper()
{
	_strupr(m_pchData);
}

void CSString::MakeLower()
{
	_strlwr(m_pchData);
}

void CSString::Reverse()
{
	Str_Reverse(m_pchData);
}

CSString::operator lpctstr() const noexcept
{
	return GetBuffer();
}

int CSString::Compare(lpctstr pStr) const noexcept
{
	return strcmp(m_pchData, pStr);
}

int CSString::CompareNoCase(lpctstr pStr) const noexcept
{
	return strcmpi(m_pchData, pStr);
}

lpctstr CSString::GetBuffer() const noexcept
{
	return m_pchData;
}

lptstr CSString::GetBuffer() noexcept
{
	return m_pchData;
}

int CSString::indexOf(tchar c)
{
	return indexOf(c, 0);
}

int CSString::indexOf(const CSString& str)
{
	return indexOf(str, 0);
}

int CSString::lastIndexOf(tchar c)
{
	return lastIndexOf(c, 0);
}

int CSString::lastIndexOf(const CSString& str)
{
	return lastIndexOf(str, 0);
}

#endif // _INC_CSSTRING_H
