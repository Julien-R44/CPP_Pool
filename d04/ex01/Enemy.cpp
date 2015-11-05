/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 04:25:17 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/05 06:26:02 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(Enemy const & src) { *this = src; }
Enemy::Enemy(int hp, std::string const & type): _hp(hp), _type(type) {
	return ;
}

Enemy::~Enemy(void)
{}

std::string	const &		Enemy::getType( void ) const { return this->_type; }
int						Enemy::getHP( void ) const { return this->_hp; }

void					Enemy::takeDamage(int damage)
{
	if (this->_hp > 0)
		this->_hp -= damage;
}

Enemy & 				Enemy::operator=( Enemy const & src ) {
	this->_hp = src._hp;
	this->_type = src._type;
	return *this;
}
