/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgodin <sgodin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:51:39 by sgodin            #+#    #+#             */
/*   Updated: 2023/09/25 14:51:39 by sgodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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