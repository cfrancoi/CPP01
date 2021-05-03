#ifndef __SED_H__
#define __SED_H__
#include <string>

class Sed
{
private:
	std::string 	_input;
	std::string		_output;
public:
	Sed();
	Sed(const std::string input);
	~Sed();

	void				setInput(const std::string input);
	std::string			getOuput();

	int					createOuput(const std::string s1, const std::string s2);

};

#endif // __SED_H__