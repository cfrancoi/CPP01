#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP
#include "Zombie.hpp"
#include <cstdlib>
#include <string>

class ZombieHorde
{
private:
	Zombie * _horde;
	const size_t	_horde_len;
	
	std::string	randomName(int i);
	std::string	randomType(int i);
public:
	
	ZombieHorde(const size_t horde_len);
	~ZombieHorde();

	void	announce(void);
};


#endif