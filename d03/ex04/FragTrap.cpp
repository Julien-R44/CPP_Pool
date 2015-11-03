/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 04:50:15 by jripoute          #+#    #+#             */
/*   Updated: 2015/11/03 08:18:51 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

const std::string		arrayAttacks[] = {
	"Kill, reload! Kill, reload! KILL! RELOAD!",
	"Uh, how do I cast magic missile?",
	"All these bullets in just one shot.",
	"Laaasers!",
	"100\% more mini-trap turret!"
};

FragTrap::FragTrap( std::string name ) : ClapTrap(name) {
	std::cout << "FragTrap -- start bootup sequence." << std::endl;
	return;
}

FragTrap::FragTrap( FragTrap const & src) {
	*this = src;
	return ;
}

FragTrap::~FragTrap( void ) {
	std::cout << "FragTrap -- Died." << std::endl;
	return ;
}

void		FragTrap::vaulthunter_dot_exe( std::string const & target ) {
	if ((int)(this->_energyPoints - 25) < 0)
		std::cout << "Out of energy, bruh." << std::endl;
	else {
		this->_energyPoints -= 25;
		std::cout << "Vaulthunter.exe attack " << target << ". \"" << arrayAttacks[rand() % 5] << "\"" << std::endl;
	}
}
