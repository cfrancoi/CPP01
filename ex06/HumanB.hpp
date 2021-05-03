#ifndef __HUMANB_H__
#define __HUMANB_H__
#include <string>
#include "Weapon.hpp"

class HumanB
{
private:
	Weapon * _weapon;
	std::string _name;

public:
	HumanB(const std::string name);
	~HumanB();
	void	setWeapon(Weapon & weapon);
	void	attack();
};

#endif // __HUMANB_H__