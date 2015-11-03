/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 08:24:27 by jripoute          #+#    #+#             */
/*   Updated: 2015/11/03 08:52:59 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap( std::string name ) : ClapTrap(name) {
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_meleeAtkDmg = 60;
	this->_rangedAtkDmg = 5;
	this->_armorDmgReduc = 0;
	std::cout << "NinjaTrap -- start bootup sequence." << std::endl;
	return;
}

NinjaTrap::NinjaTrap( NinjaTrap const & src ) {
	*this = src;
	return ;
}

NinjaTrap::~NinjaTrap( void ) {
	std::cout << "NinjaTrap -- Died." << std::endl;
	return ;
}

void		NinjaTrap::ninjaShoebox( FragTrap const & src ) {
	std::cout << "NINJA SHOEBOX FRAGTRAP" << std::endl;
}

void		NinjaTrap::ninjaShoebox( NinjaTrap const & src ) {
	std::cout << "NINJA SHOEBOX NINJATRAP" << std::endl;
}

void		NinjaTrap::ninjaShoebox( ClapTrap const & src ) {
	std::cout << "NINJA SHOEBOX CLAPTRAP" << std::endl;
}

void		NinjaTrap::ninjaShoebox( ScavTrap const & src ) {
	std::cout << "NINJA SHOEBOX SCAVTRAP" << std::endl;
}
