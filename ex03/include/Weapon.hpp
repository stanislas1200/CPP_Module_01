#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

# define R "\x1b[0m"
# define CYAN "\x1b[1;36m"
# define MAGENTA "\x1b[1;35m"
# define RED "\x1b[1;31m"

class Weapon {
	public:
		Weapon(std::string type);
		~Weapon(void);
		std::string getType(void);
		void setType(std::string type);
	private:
		std::string type;
};

#endif