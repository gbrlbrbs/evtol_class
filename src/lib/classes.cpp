#include "classes.h"
#include <iostream>

A::A()
{
    std::cout << "standard constructor" << std::endl;
    this->x = 2;
}

A::A(int x)
{
    std::cout << "constructor with x" << std::endl;
    this->x = x;
}

A::~A()
{
    std::cout << "destructor" << std::endl;
}

int A::getx()
{
    return this->x;
}

void A::setx(int x) {
    this->x = x;
}

Pokemon::Pokemon()
{
    this->_hp = 15;
    this->_maxhp = 15;
    this->_level = 5;
    this->_fainted = false;
}

Pokemon::Pokemon(int hp, int level)
{
    _hp = hp;
    _maxhp = hp;
    _level = level;
    _fainted = false;
}

void Pokemon::take_dmg(int dmghp)
{
    _hp = _hp - dmghp;
    if (_hp <= 0) 
    {
        _fainted = true;
    }
}

void Pokemon::heal(int healhp)
{
    _hp = _hp + healhp;
    if (_hp >= _maxhp)
    {
        _hp = _maxhp;
    }
}

void Pokemon::level_up()
{
    _level += 1;
}

int Pokemon::get_hp()
{
    return _hp;
}

int Pokemon::get_level()
{
    return _level;
}

bool Pokemon::get_fainted()
{
    return _fainted;
}

Pokemon::~Pokemon()
{

}

ElectricPokemon::ElectricPokemon(int hp, int level) :
    Pokemon(hp, level)
{
    this->_ground_multiplier = 0.0;
}