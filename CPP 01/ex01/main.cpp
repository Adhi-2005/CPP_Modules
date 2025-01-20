#include "zombie.hpp"

int main()
{
	int	N = 10;
	std::string name = "Ship";

	Zombie* Horde = zombieHorde(N, name);

	delete[] Horde;
	return (0);
}