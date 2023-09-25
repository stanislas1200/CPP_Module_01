/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgodin <sgodin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:07:25 by sgodin            #+#    #+#             */
/*   Updated: 2023/09/25 15:07:25 by sgodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

void Zombie::setName( std::string name )
{
	this->name = name;
}

Zombie::~Zombie( void )
{
	std::cout << GREEN BOLD << this->name << RESET << ":" << RED << " is dead 🩸." << RESET << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << GREEN BOLD << this->name << RESET << ": BraiiiiiiinnnzzzZ..." << std::endl;
}