/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 23:09:01 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/01 00:45:10 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : _type(type) {
	return ;
}

Weapon::~Weapon( void ) {
	return ;
}

const std::string	&Weapon::getType( void) const {
	return this->_type;
}

void				Weapon::setType(std::string type) {
	this->_type = type;
}
