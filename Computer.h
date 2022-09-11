// guards
#ifndef COMPUTER_H
#define COMPUTER_H

#include <string>
#include "Player.h"

class Computer : public Player
{
    char* moves;

    public:
        Computer();
        void move();
        std::string getMoves();
        ~Computer();
};

#endif