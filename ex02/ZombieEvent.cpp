#include "ZombieEvent.hpp"
#include <cstdlib>
#include <iostream>
#include <ctime>

ZombieEvent::ZombieEvent(/* args */)
{
}

ZombieEvent::~ZombieEvent()
{
}

void ZombieEvent::setZombieType(const std::string name)
{
	this->_zombietype = name;
}

Zombie * ZombieEvent::newZombie(const std::string name)
{
	return (new Zombie(name, this->_zombietype));
}

Zombie * ZombieEvent::randomChump()
{
	std::string list[8] = {"Bob", "Bill", "Gutsie", "Zoumzoum", "Bilger", "Gobbler", "Chewie", "Urgh"};
	std::srand(std::time(0));
	int x = std::rand() % 8;

	return(this->newZombie(list[x]));

}