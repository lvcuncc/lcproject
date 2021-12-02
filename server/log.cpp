#include "log.h"
namespace server
{

	Logger::Logger(const std::string& name)
		:m_name(name){

	}

	void Logger::addAppender(LogAppender::ptr appender){
		m_appenders.push_bacl(appender);
	}

	void Logger::delAppender(LogAppender::ptr appender){
		for(auto it = m_appenders.begin();
				it!=m_appenders.end(); ++it){
			if(*it == appender){
				m_appenders.erase(it);
				break;
			}
		}
	}



    void Logger::log(Level::level, const LogEvent::ptr event){
    	
    }
    void Logger::debug(LogEvent::ptr event){
    	debug(LogLevel::DEBUG, event);
    }
    void Logger::info(LogEvent::ptr event){
    	debug(LogLevel::INFO, event);
    }
    void Logger::warn(LogEvent::ptr event){
    	debug(LogLevel::WARN, event);
    }
    void Logger::error(LogEvent::ptr event){
    	debug(LogLevel::ERROR, event);
    }
    void Logger::fatal(LogEvent::ptr event){
    	debug(LogLevel::FATAL, event);
    }
}