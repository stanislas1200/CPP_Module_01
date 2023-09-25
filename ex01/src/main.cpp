/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgodin <sgodin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:07:28 by sgodin            #+#    #+#             */
/*   Updated: 2023/09/25 15:07:28 by sgodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int	main(void)
{
	Zombie	*zombie = new Zombie();
	if (!zombie)
		return (1);

	zombie->setName("Zombie");
	zombie->announce();
	delete zombie;

	Zombie	*horde = zombieHorde(5, "Horde");
	if (!horde)
		return (1);

	for (int i = 0; i < 5; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}