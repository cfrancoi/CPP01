#include "Sed.hpp"
#include <iostream>
#include <fstream>


int main(int ac, char **av)
{
	Sed el;

	if (ac != 4)
	{
		std::cerr << "Error bad number of arguments" << std::endl;
		return (1);
	}


	std::ifstream	ifs(av[1]);
	std::string		input;
	char c;

	while (ifs.get(c))
	{
		input += c;
	}
	ifs.close();


	el.setInput(input);
	if (!el.createOuput(av[2], av[3]))
	{
		std::cerr << "Error empty argument" << std::endl;
		return (1);
	}

	std::string output = el.getOuput();
	std::string	file = av[1];
	file += ".replace";
	
	std::ofstream ofs(file.c_str());

	ofs << output;
	ofs.close();
	return (0);
}
