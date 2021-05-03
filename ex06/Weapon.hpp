#ifndef __WEAPON_H__
#define __WEAPON_H__
#include <string>

class Weapon
{
private:
	std::string	_type;

public:
	std::string&	getType();
	void			setType(const std::string type);
	Weapon(const std::string type);
	~Weapon();
};

#endif // __WEAPON_H__