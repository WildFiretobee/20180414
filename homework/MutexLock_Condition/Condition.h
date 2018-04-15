 ///
 /// @file    Condition.h
 /// @author  WildFiretobee(Danderous@email.com)
 /// @date    2018-04-15 16:14:31
 ///
#include "MutexLock.h" 

class Condition
{
public:
	//传互斥锁的引用
	Condition(MutexLock &mutex)
	:_mutex(mutex)
	{
		pthread_cond_init(&_cond,NULL);
	}

	void wait()
	{
		pthread_cond_wait(&_cond,_mutex.getMutexPointer());
	}
	void notify()
	{
		pthread_cond_signal(&_cond);
	}
	void notifyall()
	{
		pthread_cond_broadcast(&_cond);
	}
private:
	pthread_cond_t _cond;
	MutexLock &_mutex;
};
