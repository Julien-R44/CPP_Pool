/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 04:50:35 by jripoute          #+#    #+#             */
/*   Updated: 2015/11/03 06:01:26 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include <iostream>

class ScavTrap {

public:
	ScavTrap( std::string name );
	ScavTrap( ScavTrap const & src);
	~ScavTrap( void );

	void			rangedAttack( std::string const & target ) const;
	void			meleeAttack( std::string const & target ) const;
	void			takeDamage( unsigned int amount );
	void			beRepaired( unsigned int amount );

	void			debugDisplay( void ) const;
	void			challengeNewcomer( std::string const & target);

	ScavTrap &		operator=( ScavTrap const & rhs );


private:
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_maxHitPoints;
	unsigned int	_energyPoints;
	unsigned int	_maxEnergyPoints;
	unsigned int	_level;
	unsigned int	_meleeAtkDmg;
	unsigned int	_rangedAtkDmg;
	unsigned int	_armorDmgReduc;
};

std::ostream &		operator<<( std::ostream & o, ScavTrap const & rhs );

#endif
