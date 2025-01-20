#include "Observer.h"

void Observer::OnNotify() const
{
    std::cout << "Observer " << m_name << " has been notifed!" << std::endl; 
}
