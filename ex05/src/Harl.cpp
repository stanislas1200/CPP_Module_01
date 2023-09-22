#include "../include/Harl.hpp"

Harl::Harl(void) {
	levelFunctions.insert(std::make_pair("debug", &Harl::debug));
	levelFunctions.insert(std::make_pair("info", &Harl::info));
	levelFunctions.insert(std::make_pair("warning", &Harl::warning));
	levelFunctions.insert(std::make_pair("error", &Harl::error));
}

Harl::~Harl(void) {
}

void Harl::debug(void) {
	std::cout << CYAN << "[ Debug ]\n" << R BOLD << "Just remember, even the coffee needs debugging sometimes!" R << std::endl;
}

void Harl::info(void) {
	std::cout << MAGENTA << "[ Info ]\n" << R BOLD "A computer program does what you tell it to do, not what you want it to do." R << std::endl;
}

void Harl::warning(void) {
	std::cout << YELLOW << "[ Warning ]\n" << R BOLD "The code is so confused, even it doesn't know what it's doing!" R << std::endl;
}

void Harl::error(void) {
	std::cout << RED << "[ Error 404 ]\n" << R BOLD "Patience not found." R << std::endl;
}

void Harl::complain(std::string level) {
	if (levelFunctions[level])
		(this->*levelFunctions[level])();
	else
		std::cout << GRAY "[ Unknown level ]\n" R BOLD << level << R << std::endl;
}
