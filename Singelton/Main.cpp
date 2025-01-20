#include "Logger.h"

int main()
{
    Logger::GetInstance()->addMessage("First message");
    Logger::GetInstance()->addMessage("Second message");
    Logger::GetInstance()->addMessage("Third message");
    Logger::GetInstance()->addMessage("Fourth message");
    Logger::GetInstance()->addMessage("Fifth message");

    Logger::GetInstance()->printMessage();
}
