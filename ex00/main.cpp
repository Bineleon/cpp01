#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie*	heapZ = new Zombie(name);
	return heapZ;
}

void randomChump( std::string name )
{
	Zombie stackZ = Zombie(name);
}

int main (void)
{
	randomChump("stackZombie");
	Zombie* newZ = newZombie("heapZombie");


	delete newZ;

	return (0);
}