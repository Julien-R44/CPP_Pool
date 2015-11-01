/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 22:45:29 by y0ja              #+#    #+#             */
/*   Updated: 2015/10/31 23:08:00 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {
	return ;
}

Brain::~Brain( void ) {
	return ;
}

std::string		Brain::identify( void ) const {
	std::stringstream	adress;

	adress << (void*)this;
	return adress.str();
}
