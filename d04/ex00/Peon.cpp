/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 03:28:06 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/05 04:21:05 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon( std::string name ): Victim(name) {
	std::cout << "Zog zog." << std::endl;
	return;
}

Peon::~Peon( void ) {
	std::cout << "Bleuark..." << std::endl;
	return;
}
