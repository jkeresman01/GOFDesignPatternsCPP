#include "Logger.h"

Logger* Logger::s_instance = nullptr;

Logger::Logger()
{
    std::cout << "Logger has been created!" << std::endl;
}

Logger::~Logger()
{
    if(s_instance != nullptr)
    {
        delete s_instance;
    }
}

void Logger::addMessage(const std::string &message)
{
    m_messages.push_back(message);
}

void Logger::printMessage()
{
    for(const auto &message : m_messages)
    {
        std::cout << "Log entry: " << message << std::endl;
    }
}

Logger* Logger::GetInstance()
{
    if(s_instance == nullptr)
    {
        s_instance = new Logger;
    }

    return s_instance;
}
