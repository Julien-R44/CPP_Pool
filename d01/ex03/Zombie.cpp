/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 05:49:49 by y0ja              #+#    #+#             */
/*   Updated: 2015/10/31 22:36:50 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

const char g_randomNames[] =
	"0123456789"
	"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
	"abcdefghijklmnopqrstuvwxyz";


Zombie::Zombie(void) : _type("ZombieHorde") {
	char name[9];
	int i = 0;

	for (i = 0; i < 8; i++) {
		name[i] = g_randomNames[rand() % sizeof(g_randomNames) - 1];
	}
	name[i] = 0;
	this->_name = name;
	return ;
}

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type) {
	return ;
}

Zombie::~Zombie(void) {
	std::cout << "<" << this->_name << "(" << this->_type << ")>";
	std::cout << " Died." << std::endl;
}

void	Zombie::announce(void) {
	std::cout << "<" << this->_name << "(" << this->_type << ")>";
	std::cout << " Braiiiiiiinnnssss..." << std::endl;
}
