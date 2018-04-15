 ///
 /// @file    log4cpp_func.h
 /// @author  WildFiretobee(Danderous@email.com)
 /// @date    2018-04-15 16:42:36
 ///

#include "log4cpp_Mylog.h"

#include <iostream>
#include <log4cpp/Category.hh>
#include <log4cpp/OstreamAppender.hh>
#include <log4cpp/PatternLayout.hh>
#include <log4cpp/BasicLayout.hh>
#include <log4cpp/Appender.hh>
#include <log4cpp/FileAppender.hh>
#include <log4cpp/Priority.hh>

using std::cout;
using std::endl;

#define FILENAME "Mylog.txt"

//整型类型文件行号->string类型

inline std::string int2string(int line)
{
	std::ostringstream oss;
	oss<<line;
	return oss.str();
}

//定义一个在日志后添加 文件名 函数名 行号 的宏定义
#define suffix(msg) std::string(msg).append(" ##")\
					.append(__FILE__).append(":").append(__func__)\
					.append(":").append(int2string(__LINE__))\
					.append("##").c_str()


void Mylog::error(const char *msg){
	
	log4cpp::OstreamAppender* osAppender=new log4cpp::OstreamAppender
		("osAppender",&cout);

	log4cpp::PatternLayout* pLayout=new log4cpp::PatternLayout();
	pLayout->setConversionPattern("%d: %p %c %x:%m%n");

	log4cpp::PatternLayout* pLayout_two=new log4cpp::PatternLayout();
	pLayout_two->setConversionPattern("%d: %p %c %x:%m%n");

	osAppender->setLayout(pLayout);

	//获取文件日志输出
	
	log4cpp::Appender *file_appender=new log4cpp::FileAppender(
			"fileAppender",FILENAME);
	file_appender->setLayout(pLayout_two);

	log4cpp::Category& root=log4cpp::Category::getRoot();

	log4cpp::Category& infoCategory=root.getInstance("Mylog::error(const char*)");
	infoCategory.addAppender(osAppender);
	infoCategory.addAppender(file_appender);

	infoCategory.setPriority(log4cpp::Priority::INFO);
	
	infoCategory.error(suffix(msg));

	log4cpp::Category::shutdown();

}

void Mylog::warn(const char *msg){
	
	log4cpp::OstreamAppender* osAppender=new log4cpp::OstreamAppender
		("osAppender",&cout);

	log4cpp::PatternLayout* pLayout=new log4cpp::PatternLayout();
	pLayout->setConversionPattern("%d: %p %c %x:%m%n");

	log4cpp::PatternLayout* pLayout_two=new log4cpp::PatternLayout();
	pLayout_two->setConversionPattern("%d: %p %c %x:%m%n");

	osAppender->setLayout(pLayout);

	//获取文件日志输出
	
	log4cpp::Appender *file_appender=new log4cpp::FileAppender(
			"fileAppender",FILENAME);
	file_appender->setLayout(pLayout_two);

	log4cpp::Category& root=log4cpp::Category::getRoot();

	log4cpp::Category& infoCategory=root.getInstance("Mylog::warn(const char*)");
	infoCategory.addAppender(osAppender);
	infoCategory.addAppender(file_appender);

	infoCategory.setPriority(log4cpp::Priority::INFO);
	
	infoCategory.warn(suffix(msg));

	log4cpp::Category::shutdown();

}

void Mylog::debug(const char *msg){
	
	log4cpp::OstreamAppender* osAppender=new log4cpp::OstreamAppender
		("osAppender",&cout);

	log4cpp::PatternLayout* pLayout=new log4cpp::PatternLayout();
	pLayout->setConversionPattern("%d: %p %c %x:%m%n");

	log4cpp::PatternLayout* pLayout_two=new log4cpp::PatternLayout();
	pLayout_two->setConversionPattern("%d: %p %c %x:%m%n");

	osAppender->setLayout(pLayout);

	//获取文件日志输出
	
	log4cpp::Appender *file_appender=new log4cpp::FileAppender(
			"fileAppender",FILENAME);
	file_appender->setLayout(pLayout_two);

	log4cpp::Category& root=log4cpp::Category::getRoot();

	log4cpp::Category& infoCategory=root.getInstance("Mylog::warn(const char*)");
	infoCategory.addAppender(osAppender);
	infoCategory.addAppender(file_appender);

	infoCategory.setPriority(log4cpp::Priority::INFO);
	
	infoCategory.debug(suffix(msg));

	log4cpp::Category::shutdown();

}

void Mylog::info(const char *msg){
	
	log4cpp::OstreamAppender* osAppender=new log4cpp::OstreamAppender
		("osAppender",&cout);

	log4cpp::PatternLayout* pLayout=new log4cpp::PatternLayout();
	pLayout->setConversionPattern("%d: %p %c %x:%m%n");

	log4cpp::PatternLayout* pLayout_two=new log4cpp::PatternLayout();
	pLayout_two->setConversionPattern("%d: %p %c %x:%m%n");

	osAppender->setLayout(pLayout);

	//获取文件日志输出
	
	log4cpp::Appender *file_appender=new log4cpp::FileAppender(
			"fileAppender",FILENAME);
	file_appender->setLayout(pLayout_two);

	log4cpp::Category& root=log4cpp::Category::getRoot();

	log4cpp::Category& infoCategory=root.getInstance("Mylog::warn(const char*)");
	infoCategory.addAppender(osAppender);
	infoCategory.addAppender(file_appender);

	infoCategory.setPriority(log4cpp::Priority::INFO);
	
	infoCategory.info(suffix(msg));

	log4cpp::Category::shutdown();

}


