#pragma once

#include <string>
#include <forward_list>

#include "Observer.h"

class Subject
{
    public:
        void AddObserver(Observer* observer);
        void RemoveObserver(Observer* observer);
        void NotifyAll();

    private:
        std::forward_list<Observer*> m_observers;
};
