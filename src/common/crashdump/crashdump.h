#pragma once
#if !defined(CRASHDUMP_H) && defined(_WIN32) && !defined(_DEBUG) && !defined(_NO_CRASHDUMP)
#define CRASHDUMP_H

#include <stdio.h>
#include <windows.h>
#ifdef __MINGW32__
	#include "mingwdbghelp.h"
#else  // !__MINGW32__
	#pragma warning(disable:4091)
	#include <Dbghelp.h>
	#pragma warning(default:4091)
#endif  // __MINGW32__

typedef BOOL (WINAPI *MINIDUMPWRITEDUMP)(HANDLE hProcess,
										 DWORD dwPid,
										 HANDLE hFile,
										 MINIDUMP_TYPE DumpType,
										 CONST PMINIDUMP_EXCEPTION_INFORMATION ExceptionParam,
										 CONST PMINIDUMP_USER_STREAM_INFORMATION UserStreamParam,
										 CONST PMINIDUMP_CALLBACK_INFORMATION CallbackParam);
class CrashDump
{
	private:
		static bool m_bEnabled;
		static HMODULE m_hDll;
		static MINIDUMPWRITEDUMP m_tDumpFunction;

	public:
		static void StartCrashDump( DWORD , DWORD , struct _EXCEPTION_POINTERS* );
		static bool IsEnabled();
		static void Enable();
		static void Disable();

	private:
		CrashDump(void);
		CrashDump(const CrashDump& copy);
		CrashDump& operator=(const CrashDump& other);
};


#endif
