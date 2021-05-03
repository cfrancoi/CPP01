#include "Human.hpp"

Human::Human()
{

}
Human::~Human()
{

}

void * Human::identify( void )
{
	return(this->_brain.identify());
}

Brain & Human::getBrain( void )
{
	return (this->_brain);
}