 ///
 /// @file    log4cpp_lock.cc
 /// @author  WildFiretobee(Danderous@email.com)
 /// @date    2018-04-15 15:19:42
 ///
#include <iostream>

#include "Condition.h"

using namespace std;

int main(void)
{
	MutexLock mutex;
	Condition condition(mutex);

	mutex.lock();
	condition.wait();

	cout << "doing something..." << endl;

	mutex.unlock();
	return 0;
}

