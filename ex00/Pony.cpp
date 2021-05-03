#include "Pony.hpp"
#include <iostream>

Pony::Pony(std::string name)
{
	this->name = name;
	std::cout << this->name << " is a new Pony" << std::endl;
}

Pony::~Pony()
{
	std::cout << this->name << " is now free" << std::endl;
}

void 	Pony::gallop()
{
	std::cout << this->name << " gallop" << std::endl;
}