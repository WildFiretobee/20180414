#include "log4cpp/Category.hh"   
#include "log4cpp/FileAppender.hh"   
#include "log4cpp/BasicLayout.hh"   
int main(int argc, char* argv[])   
{   
        // 1ʵ����һ��layout ����   
        log4cpp::Layout* layout =    
        new log4cpp::BasicLayout();   
        // 2. ��ʼ��һ��appender ����   
         log4cpp::Appender* appender = new    
              log4cpp::FileAppender("FileAppender",   
              "./test_log4cpp1.log");   
         // 3. ��layout��������appender������   
         appender->setLayout(layout);   
         // 4. ʵ����һ��category����   
         log4cpp::Category& warn_log =    
        log4cpp::Category::getInstance("mywarn");   
         // 5. ����additivityΪfalse���滻���е�appender   
        warn_log.setAdditivity(false);   
         // 5. ��appender���󸽵�category��   
         warn_log.setAppender(appender);   
         // 6. ����category�����ȼ������ڴ����ȼ�����־������¼   
         warn_log.setPriority(log4cpp::Priority::WARN);   
         // ��¼һЩ��־   
         warn_log.info("Program info which cannot be wirten");   
         warn_log.debug("This debug message will fail to write");   
         warn_log.alert("Alert info");   
         // ������¼��־��ʽ   
         warn_log.log(log4cpp::Priority::WARN, "This will be a logged warning");   
         log4cpp::Priority::PriorityLevel priority;   
         bool this_is_critical = true;   
         if(this_is_critical)   
                 priority = log4cpp::Priority::CRIT;   
         else   
                 priority = log4cpp::Priority::DEBUG;   
         warn_log.log(priority,"Importance depends on context");   
             
         warn_log.critStream() << "This will show up << as "    
         << 1 << " critical message"    
         << log4cpp::CategoryStream::ENDLINE;   
         // clean up and flush all appenders   
         log4cpp::Category::shutdown();   
         return 0;   
}  