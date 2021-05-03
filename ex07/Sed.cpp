#include "Sed.hpp"
#include <string>

Sed::~Sed() 
{
	
}

Sed::Sed() : _input(""), _output("")
{

}

Sed::Sed(const std::string input) : _input(input), _output("")
{
	
}

void Sed::setInput(const std::string input) 
{
	this->_input = input;
}

std::string Sed::getOuput() 
{
	return(this->_output);
}

int Sed::createOuput(const std::string s1, const std::string s2) 
{
	size_t	i;
	size_t	j;

	if (s1.length() == 0 || s2.length() == 0)
		return (0);

	i = 0;
	j = 0;
	while (_input[i])
	{
		if (_input.compare(i, s1.length(), s1) == 0)
		{
			_output += s2;
			i += s1.length();
			j += s2.length();
		}
		else
		{
			_output += _input[i];
			i++;
			j++;
		}
	}
	return (1);
}
