#include <string>
#include <iostream>

int main()
{
	
	std::string brain =  "HI THIS IS BRAIN";
	std::string *ptr = &brain;
	std::string &ref = brain;

	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;
}