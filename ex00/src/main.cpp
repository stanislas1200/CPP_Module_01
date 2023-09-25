/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgodin <sgodin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:51:07 by sgodin            #+#    #+#             */
/*   Updated: 2023/09/25 14:51:07 by sgodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Zombie.hpp"

int	main( void )
{
	Zombie	*zombie;

	zombie = new Zombie("Foo");
	if (!zombie)
		return (1);
	zombie->announce();
	delete zombie;
	zombie = newZombie("newFoo");
	if (!zombie)
		return (1);
	zombie->announce();
	delete zombie;
	randomChump("randomFoo");
	return (0);
}