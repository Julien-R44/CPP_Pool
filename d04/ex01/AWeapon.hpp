/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 04:24:58 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/05 05:32:50 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class AWeapon {

public:
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(AWeapon const & src);
	virtual ~AWeapon( void );

	std::string const &	getName( void ) const;
	int 				getAPCost( void ) const;
	int 				getDamage( void ) const;
	virtual void 		attack( void ) const = 0;

	AWeapon &			operator=( AWeapon const & src );

private:
	std::string _name;
	int			_damage;
	int			_apCost;
};

#endif
