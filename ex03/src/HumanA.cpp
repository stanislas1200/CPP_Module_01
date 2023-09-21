#include "../include/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon) {
}

HumanA::~HumanA(void) {
}

void HumanA::attack(void) {
	std::cout << CYAN << this->name << R " attacks with his " RED << this->weapon.getType() << R << std::endl;
}