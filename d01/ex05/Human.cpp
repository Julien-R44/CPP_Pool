/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 22:45:29 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/03 09:17:14 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human( void ) {
	return ;
}

Human::~Human( void ) {
	return ;
}

const Brain		&Human::getBrain( void ) const {
	return (this->_brain);
}

std::string		Human::identify( void ) const {
	return (this->_brain.identify());
}
