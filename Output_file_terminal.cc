 ///
 /// @file    Output_file_terminal.cc
 /// @author  WildFiretobee(Danderous@email.com)
 /// @date    2018-04-15 12:16:34
 ///
 
#include <iostream>
using std::cout;
using std::endl;

class Mylog
{
public:
	void warn(const char* msg);
	void error(const char *msg);
	void debug(const char* msg);
	void debug(const char* msg);

private:
	Mylog();
	~Mylog();

private:

};

int main()
{
	Mylog *log=Mylog::getInstance();
		
	log->warn("hello");

	return 0;
}
