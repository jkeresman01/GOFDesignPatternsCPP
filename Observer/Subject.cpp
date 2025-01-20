#include "Subject.h"

void Subject::AddObserver(Observer* observer)
{
    m_observers.push_front(observer);
}

void Subject::RemoveObserver(Observer* observer)
{
    m_observers.remove(observer);
}

void Subject::NotifyAll()
{
    for(const auto& observer : m_observers)
    {
        observer->OnNotify();
    }
}
    

