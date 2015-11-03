/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 22:05:48 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/03 09:09:13 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde( int n ) {
	this->_hordeArray = new Zombie[n];
	this->_hordeArrayLen = n;
	return ;
}

ZombieHorde::~ZombieHorde( void ) {
	delete [] this->_hordeArray;
	return ;
}

void	ZombieHorde::announce(void) const {
	int i = 0;
	while (i < this->_hordeArrayLen) {
		this->_hordeArray[i].announce();
		i++;
	}
}
