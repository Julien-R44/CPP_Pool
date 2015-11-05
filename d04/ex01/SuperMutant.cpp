/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 04:25:25 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/05 06:21:48 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void): Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
	return ;
}

SuperMutant::SuperMutant(SuperMutant const & src):  Enemy(170, "Super Mutant") {
	*this = src;
}

SuperMutant::~SuperMutant( void ) {
	std::cout << "Aaaargh." << std::endl;
}

void				SuperMutant::takeDamage( int dmg ) {
	if (this->_hp - (dmg - 3) >= 0)
		this->_hp -= (dmg - 3);
}

SuperMutant &		SuperMutant::operator=(SuperMutant const & src) {
	Enemy::operator=(src);
	return *this;
}
