/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgodin <sgodin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:11:15 by sgodin            #+#    #+#             */
/*   Updated: 2023/09/25 15:11:15 by sgodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

# define RESET		"\033[0m"
# define BOLDMAGENTA	"\033[1m\033[35m"
# define BOLDCYAN	"\033[1m\033[36m"

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;

	std::cout << BOLDCYAN << "address of str:            " << RESET << &str << std::endl;
	std::cout << BOLDCYAN << "address held by ptr:       " << RESET << ptr << std::endl;
	std::cout << BOLDCYAN << "address held by ref:       " << RESET << &ref << std::endl;

	std::cout << BOLDMAGENTA << "value of str:            " << RESET << str << std::endl;
	std::cout << BOLDMAGENTA << "value pointed to by ptr: " << RESET << *ptr << std::endl;
	std::cout << BOLDMAGENTA << "value pointed to by ref: " << RESET << ref << std::endl;
	return (0);
}