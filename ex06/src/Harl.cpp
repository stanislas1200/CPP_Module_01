#include "../include/Harl.hpp"

Harl::Harl(void) {
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
	std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    while (i < 4 && levels[i].compare(level))
        i++ ;
    switch (i)
    {
    case    0: 
        this->debug();
    case    1: 
        this->info();
    case    2: 
        this->warning();
    case    3: 
        this->error();
        break ;
    default:
        std::cout << GRAY "[ Probably complaining about insignificant problems ]" R << std::endl;
    }
}
