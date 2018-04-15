 ///
 /// @file    log4cpp_hello.cc
 /// @author  WildFiretobee(Danderous@email.com)
 /// @date    2018-04-15 12:08:48
 ///
 
#include <iostream>
#include <log4cpp/Category.hh>
#include <log4cpp/OstreamAppender.hh>
#include <log4cpp/BasicLayout.hh>
#include <log4cpp/Priority.hh>
using namespace std;

int main(int argc, char* argv[])
{
    log4cpp::OstreamAppender* osAppender = new log4cpp::OstreamAppender("osAppender",&cout);
    osAppender->setLayout(new log4cpp::BasicLayout());
    
    log4cpp::Category& root = log4cpp::Category::getRoot();
    root.addAppender(osAppender);
    root.setPriority(log4cpp::Priority::DEBUG);
    
    root.error("Hello log4cpp in a Error Message!");
    root.warn("Hello log4cpp in a Warning Message!");
    
    log4cpp::Category::shutdown();    
    return 0;
}