#pragma once

#include <iostream>

#include "Command.h"

class Move : public Command
{
    public:
        void execute(Character &character) override
        {
            std::cout << "Character: "<< character.name << " has moved!" << std::endl;
        }

        void undo(Character &character) override
        {
            
        }
};
