/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/07 06:00:57 by y0ja              #+#    #+#             */
/*   Updated: 2015/07/07 06:57:50 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook( void ) {
	return ;
}

PhoneBook::~PhoneBook( void ) {
	return ;
}

bool	PhoneBook::addContact( void ) {
	int i = 0;

	while (this->_contacts[i].enabled == 1) i++;
	if (i == 8)
		return false;
	this->_contacts[i].fillFields();
	return true;
}

void	PhoneBook::search( void ) const {
	std::string str;

	for (int i = 0; this->_contacts[i].enabled == 1; i++) {
		this->_contacts[i].displayFields();
	}
	std::cout << "Index of desired entry : ";
	std::getline(std::cin, str);
	if (str[0] >= '0' && str[0] <= '7' && str.length() == 1 && this->_contacts[atoi(str.c_str())].enabled == 1)
		this->_contacts[atoi(str.c_str())].displayAll();
	else
		std::cout << "Bad input." << std::endl;
	return ;
}
