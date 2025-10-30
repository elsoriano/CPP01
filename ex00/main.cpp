#include <string>

#include "Zombie.hpp"

void randomChump(std::string name);
Zombie *newZombie(std::string name);

int main(void)
{
    Zombie  *Zombie2;

    Zombie2 = newZombie("John");
    randomChump("Mike");

    delete Zombie2;
    return (0);
}