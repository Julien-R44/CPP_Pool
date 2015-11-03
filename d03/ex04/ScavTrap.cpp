/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 04:50:15 by jripoute          #+#    #+#             */
/*   Updated: 2015/11/03 08:18:21 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

const std::string		arrayAttack[] = {
	"Step right up, to the Bulletnator 9000!",
	"This is why I was built!",
	"Like running over a bug!",
	"Who's a badass robot? This guy!",
	"Ha ha, this is in no way surprising! Ha ha!"
};

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name) {
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_rangedAtkDmg = 15;
	this->_armorDmgReduc = 3;
	std::cout << "ScavTrap -- start bootup sequence" << std::endl;
	return;
}

ScavTrap::ScavTrap( ScavTrap const & src) {
	*this = src;
	return ;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "ScavTrap -- Died." << std::endl;
	return ;
}

void		ScavTrap::challengeNewcomer( std::string const & target ) {
		std::cout << "SC4V-TR4P attack " << target << ". \"" << arrayAttack[rand() % 5] << "\"" << std::endl;
}


