#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(const std::string name, const std::string type) : name(name), type(type) 
{
	this->announce();
}

Zombie::~Zombie()
{
	std::cout << "<" << this->name << " (" << this->type << ")" << ">" << " is realy dead !" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->name << " (" << this->type << ")" << ">" << " Braiiiiiiinnnssss ..." << std::endl;
}