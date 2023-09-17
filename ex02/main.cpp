#include <iostream>
#include <string>

# define RESET		"\033[0m"
# define BOLDMAGENTA	"\033[1m\033[35m"
# define BOLDCYAN	"\033[1m\033[36m"

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;

	std::cout << BOLDCYAN << "address of str: " << RESET << &str << std::endl;
	std::cout << BOLDCYAN << "address of ptr: " << RESET << &ptr << std::endl;
	std::cout << BOLDCYAN << "address of ref: " << RESET << &ref << std::endl;

	std::cout << BOLDMAGENTA << "value of str: " << RESET << str << std::endl;
	std::cout << BOLDMAGENTA << "value of ptr: " << RESET << *ptr << std::endl;
	std::cout << BOLDMAGENTA << "value of ref: " << RESET << ref << std::endl;
	return (0);
}