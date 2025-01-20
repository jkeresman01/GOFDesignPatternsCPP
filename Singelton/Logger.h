#pragma once

#include <iostream>
#include <vector>
#include <string>

class Logger
{
    public:
        static Logger* GetInstance();

        void printMessage();
        void addMessage(const std::string &message);
        
    private:
        Logger();
        ~Logger();

        std::vector<std::string> m_messages;

        static Logger* s_instance;
};


