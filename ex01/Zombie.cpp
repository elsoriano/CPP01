#include "Zombie.hpp"

#include <string>
#include <iostream>

Zombie::Zombie(std::string name) : name(name){};
Zombie::Zombie() : name("Unnamed Zombie") {};

Zombie::~Zombie()
{
    std::cout << name << " has been destroyed." << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
void	Zombie::setName(std::string name)
{
	this->name = name;
}