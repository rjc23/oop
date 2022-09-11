// guards
#ifndef PERSON_H
#define PERSON_H

#include <string>
#include "Player.h"

class Person : public Player
{
    char* moves;

    public:
        Person();
        void move();
        std::string getMoves();
        ~Person();
};

#endif