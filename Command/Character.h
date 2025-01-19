#pragma once

#include <cstdint>
#include <string>

struct Charcater
{
    uint32_t x;
    uint32_t y;
    std::string  name;

    explicit Charcater(const std::string _name) : name(_name) {}

    void move(uint32_t _x, uint32_t _y)
    {
        x = _x;
        y = _y;
    }
};
