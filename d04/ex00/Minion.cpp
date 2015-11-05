/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Minion.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 04:18:28 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/05 04:20:58 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Minion.hpp"

Minion::Minion( std::string name ): Peon(name) {
	std::cout << "Balabang." << std::endl;
	return;
}

Minion::~Minion( void ) {
	std::cout << "Minion died bruh." << std::endl;
	return;
}


