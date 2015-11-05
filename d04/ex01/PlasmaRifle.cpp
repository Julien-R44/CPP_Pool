/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 04:25:06 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/05 05:19:48 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle( void ): AWeapon("Plasma Rifle", 5, 21) {
	return ;
}

PlasmaRifle::PlasmaRifle( PlasmaRifle const & src): AWeapon("Plasma Rifle", 5, 21) {
	*this = src;
	return ;
}

PlasmaRifle::~PlasmaRifle( void ) {
	return ;
}

void			PlasmaRifle::attack(void) const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle & 	PlasmaRifle::operator=(PlasmaRifle const & src) {
	AWeapon::operator=(src);
	return *this;
}
