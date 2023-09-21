#include "../include/HumanB.hpp"

HumanB::HumanB(std::string name ) : name(name), weapon(NULL) {
}

HumanB::~HumanB(void) {
}

void HumanB::attack(void) {
	if (this->weapon == NULL)
		std::cout << MAGENTA << this->name << R " has no weapon" << std::endl;
	else
		std::cout << MAGENTA << this->name << R " attacks with his " RED << this->weapon->getType() << R << std::endl;
}

void HumanB::setWeapon(Weapon& weapon) {
	this->weapon = &weapon;
}