#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

# define RESET		"\x1b[0m"
# define BOLD		"\x1b[1m"
# define RED		"\x1b[31m"
# define GREEN		"\x1b[32m"
# define YELLOW		"\x1b[33m"
# define BLUE		"\x1b[34m"
# define MAGENTA	"\x1b[35m"

class Zombie
{
public:
    Zombie( std::string name );
    ~Zombie( void );
    void announce( void );
private:
    std::string	name;
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );
#endif