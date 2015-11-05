/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 04:25:17 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/05 06:23:21 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>

class Enemy {

public:
	Enemy(int hp, std::string const & type);
	Enemy( Enemy const & src );
	virtual ~Enemy( void );


	std::string const 	&getType( void ) const;
	int 				getHP( void ) const;
	virtual void 		takeDamage(int);

	Enemy & 			operator=( Enemy const & src );

protected:
	int			_hp;
	std::string _type;
};


#endif
