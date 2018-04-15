 ///
 /// @file    log4cpp_Singleton.cc
 /// @author  WildFiretobee(Danderous@email.com)
 /// @date    2018-04-12 16:52:54
 ///
 
#include <iostream>
#include "log4cpp_func.h"

using std::cout;
using std::endl;

int main(void)
{
	Mylog *log = Mylog::getInstance();

	log->warn("this is warn");
	log->error("this is error");
	log->debug("this is debug");
	log->info("this is info");
	Mylog::destory();

	return 0;
}

