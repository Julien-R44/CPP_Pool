/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 23:09:54 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/01 00:44:38 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon {

public:
	Weapon( std::string type );
	~Weapon( void );

	const std::string	&getType( void ) const;
	void				setType(std::string str);

private:
	std::string _type;

};


#endif
