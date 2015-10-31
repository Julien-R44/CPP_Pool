/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 05:30:33 by y0ja              #+#    #+#             */
/*   Updated: 2015/10/31 05:51:35 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

Pony::Pony(std::string str): _name(str) {
	std::cout << this->_name << ": Pony was Created" << std::endl;
	return ;
}

Pony::~Pony(void) {
	std::cout << this->_name << " : Pony was Deleted" << std::endl;
	return ;
}

void	Pony::sayName(void) const {
	std::cout << "I am " << this->_name << std::endl;
}
