#include <queue>

#include "Character.h"
#include "Move.h"

void fillCommandQueue(std::queue<Command*> &commandQueue)
{
    Move* move1 = new Move;
    Move* move2 = new Move;
    Move* move3 = new Move;
    Move* move4 = new Move;

    commandQueue.push(move1);
    commandQueue.push(move2);
    commandQueue.push(move3);
    commandQueue.push(move4);
}

void executeCommands(std::queue<Command*> &commandQueue, Charcater &character)
{
    while(!commandQueue.empty())
    {
        commandQueue.front()->execute(character);
        delete commandQueue.front();
        commandQueue.pop();
    }
}

int main()
{
    std::queue<Command*> commandQueue;
    fillCommandQueue(commandQueue);

    Charcater joseph("Joseph");
    executeCommands(commandQueue, joseph);
}
