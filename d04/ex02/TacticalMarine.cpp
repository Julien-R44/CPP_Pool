/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 07:06:25 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/05 07:49:35 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine( void ) {
	std::cout << "Tactical Marine ready for battle" << std::endl;
	return ;
}

TacticalMarine::TacticalMarine( TacticalMarine const & src ) {
	*this = src;
	return ;
}

TacticalMarine::~TacticalMarine( void ) {
	std::cout << "Aaaargh..." << std::endl;
	return ;
}

ISpaceMarine		*TacticalMarine::clone( void ) const {
	ISpaceMarine	*marine = new TacticalMarine(*this);
	return marine;
}

void				TacticalMarine::battleCry( void ) const {
	std::cout << "For the holy PLOT !" << std::endl;
	return ;
}

void				TacticalMarine::rangedAttack( void ) const {
	std::cout << "* attacks with bolter *" << std::endl;
	return ;
}

void				TacticalMarine::meleeAttack( void ) const {
	std::cout << "* attacks with chainsword *" << std::endl;
	return ;
}

TacticalMarine &		TacticalMarine::operator=( TacticalMarine const & src ) {
	return *this;
}

