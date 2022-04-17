#include <iostream>
#include "lib/classes.h"
#include <vector>

int main(int argc, char* argv[]) {
    int x = 5;
    int y = x + 1;

    Pokemon generic(20, 6);
    std::cout << generic.get_hp() << std::endl;
    std::cout << generic.get_level() << std::endl;
    std::cout << generic.get_fainted() << std::endl;
    return 0;
}