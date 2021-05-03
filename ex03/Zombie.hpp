#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>

class Zombie 
{
private:
	std::string _name;
	std::string	_type;
	
public:
	Zombie();
	Zombie(const std::string name, const std::string type);
	~Zombie(void);
	void	setName(const std::string name);
	void	setType(const std::string type);
	void	announce(void);
};

 #endif