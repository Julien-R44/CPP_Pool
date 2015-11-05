/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 08:57:56 by jripoute          #+#    #+#             */
/*   Updated: 2015/11/05 03:12:22 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap( std::string name ) : ClapTrap(name), FragTrap(name), NinjaTrap(name) {
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_meleeAtkDmg = 60;
	this->_rangedAtkDmg = 20;
	this->_armorDmgReduc = 5;
	std::cout << "SuperTrap -- start bootup sequence." << std::endl;
	return ;
}

SuperTrap::SuperTrap( SuperTrap const & src ):
	FragTrap(src),
	NinjaTrap(src)
{
	*this = src;
	return ;
}

SuperTrap::~SuperTrap( void ) {
	std::cout << "SuperTrap -- Died." << std::endl;
	return ;
}
