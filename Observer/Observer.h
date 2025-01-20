#pragma once

#include <string>
#include <iostream>

class Observer
{
    public:
        Observer(const std::string &name) : m_name(name) { }

        void OnNotify() const;

    private:
        std::string m_name;
};
