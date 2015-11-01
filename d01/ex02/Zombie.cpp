/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 05:49:49 by y0ja              #+#    #+#             */
/*   Updated: 2015/10/31 22:03:18 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

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
