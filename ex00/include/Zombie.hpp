#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

# define RESET		"\x1b[0m"
# define BOLD		"\x1b[1m"
# define RED		"\x1b[31m"
# define GREEN		"\x1b[32m"

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