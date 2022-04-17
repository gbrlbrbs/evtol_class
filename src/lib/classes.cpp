#include "classes.h"

A::A()
{
    this->x = 2;
}

A::A(int x)
{
    this->x = x;
}

A::~A() {}

int A::getx()
{
    return this->x;
}

Pokemon::Pokemon()
{
    this->_hp = 15;
    this->_level = 5;
    this->_fainted = false;
}

Pokemon::Pokemon(int hp, int level)
{
    this->_hp = hp;
    this->_level = level;
    this->_fainted = false;
}

