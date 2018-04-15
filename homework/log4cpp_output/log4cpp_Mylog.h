 ///
 /// @file    log4cpp_Mylog.h
 /// @author  WildFiretobee(Danderous@email.com)
 /// @date    2018-04-15 16:46:12
 ///
 
#include <iostream>
using std::cout;
using std::endl;

class Mylog
{
public:
	static Mylog * getInstance()
	{
		if(_msg == NULL)
		{
			_msg=new Mylog;
		}
		return _msg;
	}

	static void destory()
	{
		if(_msg)
		{
			delete _msg;
		}
	}

	void warn(const char *msg);
	void error(const char *msg);
	void debug(const char *msg);
	void info(const char *msg);

private:
	Mylog(){}
	~Mylog(){}

private:
	static Mylog * _msg;
};

Mylog * Mylog::_msg = NULL;
