#include <string>
#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <iostream>

int main()
{
	Zombie bob("Bob", "Boomer");
	ZombieEvent special;
	Zombie * event;

	special.setZombieType("Hunter");
	event = special.newZombie("bill");

	delete event;

	special.setZombieType("smoker");
	event = special.newZombie("lui");

	delete event;
	event = special.randomChump();
	delete event;


	return 0;
}