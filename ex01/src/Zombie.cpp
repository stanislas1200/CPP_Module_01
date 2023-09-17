#include "../include/Zombie.hpp"

void Zombie::setName( std::string name )
{
	this->name = name;
}

Zombie::~Zombie( void )
{
	std::cout << GREEN BOLD << this->name << RESET << ":" << RED << " is dead 🩸." << RESET << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << GREEN BOLD << this->name << RESET << ": BraiiiiiiinnnzzzZ..." << std::endl;
}