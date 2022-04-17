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
    void setx(int x);
};

class Pokemon
{
private:
    int _hp;
    int _maxhp;
    int _level;
    bool _fainted;
public:
    Pokemon();
    Pokemon(int hp, int level);
    ~Pokemon();

    void take_dmg(int dmghp);
    void heal(int healhp);
    int get_hp();

    void level_up();
    int get_level();

    bool get_fainted();
};

class ElectricPokemon : public Pokemon
{
private:
    float _ground_multiplier;
public:
    ElectricPokemon();
    ElectricPokemon(int hp, int level);
};

class Rectangle
{
private:
    int lenght;
    int width;

};

#endif