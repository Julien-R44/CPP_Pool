/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 07:06:25 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/05 08:28:38 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void): _count(0) {
	return ;
}

Squad::Squad( Squad const & src ) {
	// Clone
}

Squad::~Squad( void ) {

}

int				Squad::getCount( void ) const {
	// for (int i = 0; suqa)
}

ISpaceMarine 	*Squad::getUnit( int i ) const {
	return &this->_squad[i];
}

int				Squad::push( ISpaceMarine *marine ) {
	if (!marine)
		return (-1);
	this->_count += 1;

	ISpaceMarine	*array = new ISpaceMarine[this->_count];
	array[this->_count-1] = marine;
}
