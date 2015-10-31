/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 05:49:49 by y0ja              #+#    #+#             */
/*   Updated: 2015/10/31 05:53:35 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {
	return ;
}

Zombie::~Zombie(void) {
	return ;
}

void	Zombie::announce(void) {
	std::cout << "<" << this->_name << this->_type;
	std::cout << "> Braiiiiiiinnnssss..." << std::endl;
}
