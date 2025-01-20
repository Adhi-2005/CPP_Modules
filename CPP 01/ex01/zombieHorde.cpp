#include "zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{

	if (N <= 0)
		return NULL;
	
	Zombie* horde = new Zombie[N];

	int	i = 0;
	while(N > i)
	{
		horde[i].setName(name);
		horde[i].announce();
		i++;
	}

	return horde;
}