/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 08:57:56 by jripoute          #+#    #+#             */
/*   Updated: 2015/11/03 12:46:16 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap( std::string name ) : ClapTrap(name), FragTrap(name), NinjaTrap(name) {
	std::cout << "SuperTrap -- start bootup sequence." << std::endl;
	return ;
}

// SuperTrap::SuperTrap( SuperTrap const & src ) {
// 	*this = src;
// 	return ;
// }

SuperTrap::~SuperTrap( void ) {
	std::cout << "SuperTrap -- Died." << std::endl;
	return ;
}
