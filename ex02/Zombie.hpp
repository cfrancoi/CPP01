#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>

class Zombie 
{
private:
	std::string name;
	std::string	type;
	
public:
	Zombie(const std::string name, const std::string type);
	~Zombie(void);
	void	announce(void);
};

 #endif