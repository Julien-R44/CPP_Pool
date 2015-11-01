/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 23:09:12 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/01 00:33:52 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB {

public:
	HumanB( std::string name );
	~HumanB();

	void	attack( void ) const;
	void	setWeapon( Weapon &weapon );

private:
	std::string		_name;
	Weapon			*_weapon;

};


#endif
