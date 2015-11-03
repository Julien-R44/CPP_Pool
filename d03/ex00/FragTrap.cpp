/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 04:50:15 by jripoute          #+#    #+#             */
/*   Updated: 2015/11/03 06:11:53 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

const char		*arrayAttacks[] = {
	"Kill, reload! Kill, reload! KILL! RELOAD!",
	"Uh, how do I cast magic missile?",
	"All these bullets in just one shot.",
	"Laaasers!",
	"100\% more mini-trap turret!",
	NULL
};

FragTrap::FragTrap( std::string name ) :
	_name(name),
	_hitPoints(100),
	_maxHitPoints(100),
	_energyPoints(100),
	_maxEnergyPoints(100),
	_level(1),
	_meleeAtkDmg(30),
	_rangedAtkDmg(20),
	_armorDmgReduc(5)
{
	std::cout << "Claptrap -- start bootup sequence." << std::endl;
	return;
}

FragTrap::FragTrap( FragTrap const & src) {
	*this = src;
	return ;
}

FragTrap::~FragTrap( void ) {
	std::cout << "Argh arghargh death gurgle gurglegurgle urgh... death." << std::endl;
	return ;
}

void		FragTrap::rangedAttack( std::string const & target) const {
	std::cout << "FR4G-TP " << this->_name << " attacks " << target;
	std::cout << " at range, causing " << this->_rangedAtkDmg << " points of damage !" << std::endl;
	return ;
}

void		FragTrap::meleeAttack( std::string const & target) const {
	std::cout << "FR4G-TP " << this->_name << " attacks " << target;
	std::cout << " at melee, causing " << this->_meleeAtkDmg << " points of damage !" << std::endl;
	return ;
}

void		FragTrap::takeDamage( unsigned int amount ) {
	if (amount > this->_maxHitPoints)
		amount = this->_maxHitPoints;
	if ((int)(amount - this->_armorDmgReduc) < 0)
		amount = 0;
	else
		amount -= this->_armorDmgReduc;
	std::cout << "FR4G-TP " << this->_name << " taked " << amount << " damages " << std::endl;
	if ((int)(this->_energyPoints - amount) < 0)
		this->_energyPoints = 0;
	else
		this->_energyPoints -= amount;
}

void		FragTrap::beRepaired( unsigned int amount ) {
	std::cout << "Repair: FR4G-TP get " << amount << " energy points" << std::endl;
	if (this->_energyPoints + amount > this->_maxEnergyPoints)
		this->_energyPoints = this->_maxEnergyPoints;
	else
		this->_energyPoints += amount;
}

void		FragTrap::vaulthunter_dot_exe( std::string const & target ) {
	if ((int)(this->_energyPoints - 25) < 0)
		std::cout << "Out of energy, bruh." << std::endl;
	else {
		this->_energyPoints -= 25;
		std::cout << "Vaulthunter.exe attack " << target << ". \"" << arrayAttacks[rand() % 5] << "\"" << std::endl;
	}
}

FragTrap &	FragTrap::operator=( FragTrap const & rhs) {
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_maxHitPoints = rhs._maxHitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_maxEnergyPoints = rhs._maxEnergyPoints;
	this->_level = rhs._level;
	this->_meleeAtkDmg = rhs._meleeAtkDmg;
	this->_rangedAtkDmg = rhs._rangedAtkDmg;
	this->_armorDmgReduc = rhs._armorDmgReduc;
	return *this;
}

void		FragTrap::debugDisplay( void ) const {
	std::cout << std::endl << "FRAGTRAP -----------" << std::endl;
	std::cout << "Name = " << this->_name << std::endl;
	std::cout << "Hit Points = " << this->_hitPoints << std::endl;
	std::cout << "Max Hit Points = " << this->_maxHitPoints << std::endl;
	std::cout << "Energy Points = " << this->_energyPoints << std::endl;
	std::cout << "Max Energy points = " << this->_maxEnergyPoints << std::endl;
	std::cout << "Level = " << this->_level << std::endl;
	std::cout << "Melee ATK DMG = " << this->_meleeAtkDmg << std::endl;
	std::cout << "Ranged ATK DMG = " << this->_rangedAtkDmg << std::endl;
	std::cout << "Armor DMG reduc = " << this->_armorDmgReduc << std::endl;
}

std::ostream &		operator<<( std::ostream & o, FragTrap const & rhs ) {
	rhs.debugDisplay();
	return o;
}
