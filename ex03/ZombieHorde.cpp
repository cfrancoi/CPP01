#include "ZombieHorde.hpp"
#include <ctime>

ZombieHorde::ZombieHorde(const size_t horde_len) : _horde_len(horde_len)
{
	size_t i;

	i = 0;
	this->_horde = new Zombie[_horde_len];
	while (i < _horde_len)
	{
		this->_horde[i].setName(this->randomName(i));

		this->_horde[i].setType(this->randomType(i));
		i++;
	}
}

ZombieHorde::~ZombieHorde()
{
	delete [] this->_horde;
}

std::string	ZombieHorde::randomType(int i)
{
	std::string list[5] = {"Boomer", "Smoker", "Witcher", "Hunter", "Default"};
	std::srand(std::time(-1) + i);
	int x = std::rand() % 5;

	return(list[x]);
}

std::string	ZombieHorde::randomName(int i)
{
	std::string list[8] = {"Bob", "Bill", "Gutsie", "Zoumzoum", "Bilger", "Gobbler", "Chewie", "Urgh"};
	std::srand(std::time(0) + i);
	int x = std::rand() % 8;

	return(list[x]);
}

void	ZombieHorde::announce(void)
{
	size_t i;

	i = 0;
	while(i < this->_horde_len)
	{
		this->_horde[i].announce();
		i++;
	}
}