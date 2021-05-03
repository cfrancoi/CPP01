#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP
#include <string>
#include "Zombie.hpp"

class ZombieEvent
{
private:
	std::string _zombietype;
public:
	ZombieEvent();
	~ZombieEvent();
	void setZombieType(const std::string name);
	Zombie * newZombie(const std::string name);
	Zombie * randomChump();
};


#endif