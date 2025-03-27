#include "Zombie.hpp"

int main (void)
{
	Zombie* horde = zombieHorde(8, "Bob");
	delete [] horde;
	return (0);
}