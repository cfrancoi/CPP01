#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void)
{

}

Zombie::Zombie(const std::string name, const std::string type) : _name(name), _type(type) 
{
	this->announce();
}

Zombie::~Zombie()
{
	std::cout << "<" << this->_name << " (" << this->_type << ")" << ">" << " is realy dead !" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->_name << " (" << this->_type << ")" << ">" << " Braiiiiiiinnnssss ..." << std::endl;
}

void	Zombie::setName(const std::string name)
{
		this->_name = name;
}

void	Zombie::setType(const std::string type)
{
		this->_type = type;
}