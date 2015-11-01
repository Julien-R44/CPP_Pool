/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 23:09:12 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/01 00:42:01 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA {

public:
	HumanA( std::string name, Weapon &weapon );
	~HumanA( void );

	void	attack( void ) const;

private:
	std::string		_name;
	Weapon			&_weapon;

};


#endif
