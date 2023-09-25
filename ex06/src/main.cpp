/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgodin <sgodin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:26:43 by sgodin            #+#    #+#             */
/*   Updated: 2023/09/25 15:26:43 by sgodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

int	main(int ac, char **av)
{

	if (ac != 2)
		return (std::cout << "Usage: " << av[0] << " <level>" << std::endl, 1);
	Harl harl;
	harl.complain(av[1]);
	return (0);
}