#include <string>
#include "ZombieHorde.hpp"
#include "Zombie.hpp"
#include <iostream>

int main()
{
	Zombie bob("Bob", "Boomer");
	ZombieHorde horde(10);

	horde.announce();

	return 0;
}