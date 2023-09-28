/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgodin <sgodin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:14:53 by sgodin            #+#    #+#             */
/*   Updated: 2023/09/25 15:14:53 by sgodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) {
}

Weapon::~Weapon(void) {
}

const std::string& Weapon::getType(void) {
	return (this->type);
}

void Weapon::setType(std::string type) {
	this->type = type;
}