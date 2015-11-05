/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 03:28:06 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/05 03:55:29 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer( std::string const name, std::string const title ) :
	_name(name),
	_title(title)
{
	std::cout << name << ", " << title << ", is born !" << std::endl;
	return ;
}

Sorcerer::Sorcerer( Sorcerer const & rhs ) {
	*this = rhs;
	return ;

}

Sorcerer::~Sorcerer( void ) {
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same !" << std::endl;
	return ;
}

std::string		Sorcerer::getName( void ) const {
	return this->_name;
}

std::string		Sorcerer::getTitle( void ) const {
	return this->_title;
}

void			Sorcerer::polymorph(Victim const & src) const {
	src.getPolymorphed();
	return ;
}


Sorcerer &		Sorcerer::operator=( Sorcerer const & rhs) {
	this->_name = rhs._name;
	this->_title = rhs._title;
	return *this;
}

std::ostream &	operator<<( std::ostream & o, Sorcerer const & rhs ) {
	o << "I am " << rhs.getName() << ", " << rhs.getTitle() << ", and I like ponies !" << std::endl;
	return o;
}
