#include "Zombie.hpp"

Zombie::Zombie(std::string name) :name(name)
{
	// std::cout<< name << " is created...\n";
}

Zombie::~Zombie()
{
	// std::cout<< name << " Destroyed...\n";
}

void Zombie::announce() const{
	std::cout<< name << ": BraiiiiiiinnnzzzZ...\n";
}