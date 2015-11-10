/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 07:49:58 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/05 07:50:47 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator( void ) {
	std::cout << "* teleports from space *" << std::endl;
	return ;
}

AssaultTerminator::AssaultTerminator( AssaultTerminator const & src ) {
	*this = src;
	return ;
}

AssaultTerminator::~AssaultTerminator( void ) {
	std::cout << "I'll be back..." << std::endl;
	return ;
}

ISpaceMarine		*AssaultTerminator::clone( void ) const {
	ISpaceMarine	*marine = new AssaultTerminator(*this);
	return marine;
}

void				AssaultTerminator::battleCry( void ) const {
	std::cout << "This code is unclean. PURIFY IT !" << std::endl;
	return ;
}

void				AssaultTerminator::rangedAttack( void ) const {
	std::cout << "* does nothing *" << std::endl;
	return ;
}

void				AssaultTerminator::meleeAttack( void ) const {
	std::cout << "* attacks with chainfists *" << std::endl;
	return ;
}

AssaultTerminator &		AssaultTerminator::operator=( AssaultTerminator const & src ) {
	return *this;
}
