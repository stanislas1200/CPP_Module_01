/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgodin <sgodin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:07:35 by sgodin            #+#    #+#             */
/*   Updated: 2023/09/25 15:07:35 by sgodin           ###   ########.fr       */
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
    ~Zombie( void );
    void announce( void );
    void setName( std::string name );
private:
    std::string	name;
};

Zombie* zombieHorde( int N, std::string name );

#endif