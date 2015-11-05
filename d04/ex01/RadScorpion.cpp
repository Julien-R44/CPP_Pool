/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 04:25:36 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/05 06:22:08 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void): Enemy(80, "Rad Scorpion") {
	std::cout << "* click click click *" << std::endl;
	return ;
}

RadScorpion::RadScorpion(RadScorpion const & src) : Enemy(80, "Rad Scorpion") {
	*this = src;
	return ;
}

RadScorpion::~RadScorpion(void) {
	std::cout << "* SPROTCH *" << std::endl;
}

void				RadScorpion::takeDamage( int dmg ) {
	if (this->_hp - dmg >= 0)
		this->_hp -= dmg;
}

RadScorpion &		RadScorpion::operator=(RadScorpion const & src) {
	Enemy::operator=(src);
	return *this;
}
