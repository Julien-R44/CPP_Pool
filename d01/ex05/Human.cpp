/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 22:45:29 by y0ja              #+#    #+#             */
/*   Updated: 2015/10/31 23:02:10 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human( void ) {
	return ;
}

Human::~Human( void ) {
	return ;
}

const Brain		Human::getBrain( void ) const {
	return (this->_brain);
}

std::string		Human::identify( void ) const {
	return (this->_brain.identify());
}
