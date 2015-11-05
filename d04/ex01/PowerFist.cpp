/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 05:20:22 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/05 06:12:29 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist( void ): AWeapon("Power First", 8, 50) {
	return ;
}

PowerFist::PowerFist( PowerFist const & src): AWeapon("Power First", 8, 50) {
	*this = src;
	return ;
}

PowerFist::~PowerFist( void ) {
	return ;
}

void			PowerFist::attack(void) const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist & 	PowerFist::operator=(PowerFist const & src) {
	AWeapon::operator=(src);
	return *this;
}
