/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 04:50:35 by jripoute          #+#    #+#             */
/*   Updated: 2015/11/05 03:06:01 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <iostream>

class ClapTrap {

public:
	ClapTrap( void );
	ClapTrap( std::string name );
	ClapTrap( ClapTrap const & src);
	~ClapTrap( void );

	void			rangedAttack( std::string const & target ) const;
	void			meleeAttack( std::string const & target ) const;
	void			takeDamage( unsigned int amount );
	void			beRepaired( unsigned int amount );

	void			debugDisplay( void ) const;

	ClapTrap &		operator=( ClapTrap const & rhs );


protected:
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

std::ostream &		operator<<( std::ostream & o, ClapTrap const & rhs );

#endif
