 ///
 /// @file    MutexLock.h
 /// @author  WildFiretobee(Danderous@email.com)
 /// @date    2018-04-15 16:12:56
 ///
 
#include <iostream>
#include <pthread.h>
using namespace std;

class MutexLock
{
public:
	MutexLock()
	{
		pthread_mutex_init(&_mutex,NULL);
	}

	~MutexLock()
	{
		pthread_mutex_destroy(&_mutex);
	}

	void lock()
	{
		pthread_mutex_lock(&_mutex);
	}

	void unlock()
	{
		pthread_mutex_unlock(&_mutex);
	}

	//获取锁的地址
	pthread_mutex_t* getMutexPointer()
	{
		return &_mutex;
	}
private:
	MutexLock(const MutexLock &rhs);
	MutexLock& operator=(const MutexLock &rhs);
private:
	pthread_mutex_t _mutex;

};
