#ifndef __HUMANA_H__
#define __HUMANA_H__
#include <string>
#include "Weapon.hpp"

class HumanA
{
private:
	std::string _name;
	Weapon&		_weapon;
	/* data */
public:
	HumanA(std::string name, Weapon &Weapon);
	~HumanA();
	void		attack();
};

#endif // __HUMANA_H__