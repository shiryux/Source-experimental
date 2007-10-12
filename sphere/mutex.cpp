#define _WIN32_DCOM

#include "mutex.h"

SimpleMutex::SimpleMutex()
{
#ifdef _WIN32
	InitializeCriticalSectionAndSpinCount(&m_criticalSection, 0x80000400);
#else
	pthread_mutexattr_settype(&m_criticalSectionAttr, PTHREAD_MUTEX_RECURSIVE_NP);
	pthread_mutex_init(&m_criticalSection, &m_criticalSectionAttr);
#endif
}

SimpleMutex::~SimpleMutex()
{
#ifdef _WIN32
	DeleteCriticalSection(&m_criticalSection);
#else
	pthread_mutexattr_destroy(&m_criticalSectionAttr);
	pthread_mutex_destroy(&m_criticalSection);
#endif
}

//lock
void SimpleMutex::lock()
{
#ifdef _WIN32
	EnterCriticalSection(&m_criticalSection);
#else
	pthread_mutex_lock(&m_criticalSection);
#endif
}

//unlock
void SimpleMutex::unlock()
{
#ifdef _WIN32
	LeaveCriticalSection(&m_criticalSection);
#else
	pthread_mutex_unlock(&m_criticalSection);
#endif
}

SimpleThreadLock::SimpleThreadLock(SimpleMutex &mutex) : m_mutex(mutex), m_locked(true)
{
	mutex.lock();
}

//the destructor
SimpleThreadLock::~SimpleThreadLock()
{
	m_mutex.unlock();
}

//report the state of locking when used as a boolean
SimpleThreadLock::operator bool() const
{
	return m_locked;
}

//unlock
void SimpleThreadLock::setUnlock()
{
	m_locked = false;        
}