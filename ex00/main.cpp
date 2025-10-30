#include <string>

#include "Zombie.hpp"

int main(void)
{
    Zombie  Zombie1("Jake");
    Zombie  *Zombie2;

    Zombie2 = new Zombie("Max");
    Zombie1.announce();
    Zombie2->announce();

    delete Zombie2;
    return (0);
}