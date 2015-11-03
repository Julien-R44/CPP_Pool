/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 04:50:15 by jripoute          #+#    #+#             */
/*   Updated: 2015/11/03 07:06:14 by jripoute         ###   ########.fr       */
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

ScavTrap::ScavTrap( std::string name ) :
	_name(name),
	_hitPoints(100),
	_maxHitPoints(100),
	_energyPoints(50),
	_maxEnergyPoints(50),
	_level(1),
	_meleeAtkDmg(30),
	_rangedAtkDmg(15),
	_armorDmgReduc(3)
{
	std::cout << "Hey everybody! Check out my package!" << std::endl;
	return;
}

ScavTrap::ScavTrap( ScavTrap const & src) {
	*this = src;
	return ;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "Crap happens." << std::endl;
	return ;
}

void		ScavTrap::rangedAttack( std::string const & target) const {
	std::cout << "SC4V-TR4P " << this->_name << " attacks " << target;
	std::cout << " at range, causing " << this->_rangedAtkDmg << " points of damage !" << std::endl;
	return ;
}

void		ScavTrap::meleeAttack( std::string const & target) const {
	std::cout << "SC4V-TR4P " << this->_name << " attacks " << target;
	std::cout << " at melee, causing " << this->_meleeAtkDmg << " points of damage !" << std::endl;
	return ;
}

void		ScavTrap::takeDamage( unsigned int amount ) {
	if (amount > this->_maxHitPoints)
		amount = this->_maxHitPoints;
	if ((int)(amount - this->_armorDmgReduc) < 0)
		amount = 0;
	else
		amount -= this->_armorDmgReduc;
	std::cout << "SC4V-TR4P " << this->_name << " taked " << amount << " damages " << std::endl;
	if ((int)(this->_energyPoints - amount) < 0)
		this->_energyPoints = 0;
	else
		this->_energyPoints -= amount;
}

void		ScavTrap::beRepaired( unsigned int amount ) {
	std::cout << "Repair: SC4V-TR4P get " << amount << " energy points" << std::endl;
	if (this->_energyPoints + amount > this->_maxEnergyPoints)
		this->_energyPoints = this->_maxEnergyPoints;
	else
		this->_energyPoints += amount;
}

void		ScavTrap::challengeNewcomer( std::string const & target ) {
		std::cout << "SC4V-TR4P attack " << target << ". \"" << arrayAttack[rand() % 5] << "\"" << std::endl;
}

ScavTrap &	ScavTrap::operator=( ScavTrap const & rhs) {
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

void		ScavTrap::debugDisplay( void ) const {
	std::cout << std::endl << "ScavTrap -----------" << std::endl;
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

std::ostream &		operator<<( std::ostream & o, ScavTrap const & rhs ) {
	rhs.debugDisplay();
	return o;
}
