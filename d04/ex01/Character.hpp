/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 04:25:52 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/05 06:10:22 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"
#include <iostream>

class Character {

public:
	Character(std::string const & name);
	Character(Character const & src);
	~Character();

	void 				recoverAP();
	void 				equip(AWeapon*);
	void 				attack(Enemy*);

	std::string const 	&getName() const;
	int					getAp() const;
	AWeapon 			*getWeapon() const;

	Character &		operator=(Character const & src);

private:
	std::string		_name;
	int				_ap;
	AWeapon			*_weapon;
};

std::ostream &	operator<<(std::ostream & o, Character const & src);

#endif
