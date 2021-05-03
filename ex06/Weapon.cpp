#include "Weapon.hpp"

Weapon::Weapon(const std::string type) : _type(type)
{
	
}

Weapon::~Weapon() 
{
	
}

void	Weapon::setType(const std::string type) 
{
	this->_type = type;
}

std::string& Weapon::getType() 
{
	return(this->_type);
}
