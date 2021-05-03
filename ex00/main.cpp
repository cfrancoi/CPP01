#include "Pony.hpp"
#include <iostream>

static void ponyOnTheStack()
{
	Pony gribouille = Pony("gribouille");
	gribouille.gallop();
	std::cout << "before exit" << std::endl;
	return ;
}

static void ponyOnTheHeap()
{
	Pony *lili = new Pony("lili");
	lili->gallop();

	delete lili;
	std::cout << "before exit" << std::endl;
	return ;
}

int	main()
{
	std::cout << "Ponny on stack" << std::endl;
	ponyOnTheStack();
	std::cout << "Ponny on Heap" << std::endl;
	ponyOnTheHeap();

	return (0);
}