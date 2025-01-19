#pragma once

#include "Character.h"

class Command
{
    public:    
        virtual ~Command(){} 
        virtual void execute(Charcater &character) = 0;
        virtual void undo(Charcater &character) = 0;
};
