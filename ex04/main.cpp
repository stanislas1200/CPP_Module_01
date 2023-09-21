#include <iostream>
#include <fstream>
#include <string>


int main(int ac, char **av)
{
	if (ac != 4)
		return (std::cout << "\x1b[1;31m Error\x1b[0m: wrong number of arguments\x1b[0m" << std::endl, 1);
	else {
		std::ifstream	rfile(av[1]);
		if (rfile.is_open()) {
			std::string	content;
			if (std::getline(rfile, content, '\0'))
			{
				std::ofstream	wfile((std::string(av[1]) + ".replace").c_str());
				size_t pos;
				while ((pos = content.find(av[2])) != std::string::npos) {
					content.erase(pos, std::string(av[2]).length());
					content.insert(pos, av[3]);
				}
				wfile << content;
				wfile.close();
			}
			rfile.close();
		}
		else
			return (std::cout << "\x1b[1;31m Error\x1b[0m: could not open file \x1b[1;35m"<< av[1] << "\x1b[0m" << std::endl, 1);
	}
	return (0);
}