#ifndef CLASSES_H
#define CLASSES_H

class A
{
private:
    int x;
public:
    A(int x);
    A();
    ~A();
    int getx();
};

class Pokemon
{
private:
    int _hp;
    int _level;
    bool _fainted;
public:
    Pokemon();
    Pokemon(int hp, int level);
    ~Pokemon();

    void take_dmg(int hp);
    void heal(int hp);
    int get_hp();

    void level_up();
    int get_level();
};

#endif