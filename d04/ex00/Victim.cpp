/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 03:28:06 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/05 03:54:37 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim( std::string const name ): _name(name) {
	std::cout << "Some random victim called " << name << " just popped !" << std::endl;
	return ;
}

Victim::Victim( Victim const & rhs ) {
	*this = rhs;
	return ;
}

Victim::~Victim( void ) {
	std::cout << "Victim " << this->_name << " just died for no apparent reason !" << std::endl;
	return ;
}

std::string		Victim::getName( void ) const {
	return this->_name;
}

void			Victim::getPolymorphed( void ) const {
	std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
	return ;
}

Victim &		Victim::operator=( Victim const & rhs ) {
	this->_name = rhs._name;
	return *this;
}

std::ostream & operator<<(std::ostream & o, Victim const & rhs) {
	o << "I'm " << rhs.getName() << " and I like otters !" << std::endl;
	return o;
}
