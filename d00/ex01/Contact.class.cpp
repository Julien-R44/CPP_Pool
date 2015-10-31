/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/07 06:32:13 by y0ja              #+#    #+#             */
/*   Updated: 2015/10/31 03:27:05 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

Contact::Contact( void ) : enabled( 0 ) {
	this->_index = this->_nbInstances;
	Contact::_nbInstances += 1;
	return ;
}

Contact::~Contact( void ) {
	return ;
}

std::string	Contact::_getInput( char *field ) const {
	std::string str;

	std::cout << field << " : ";
	std::getline(std::cin, str);
	return (str);
}

void		Contact::_displayOneField( std::string str ) const {
	int offset = 10 - str.length();

	if (str.length() < 10) {
		while (offset--) std::cout << " ";
		std::cout << str;
	} else {
		for (offset = 0; offset != 9; offset++) { std::cout << str[offset]; }
		std::cout << ".";
	}
	std::cout << "|";
}

void		Contact::displayAll( void ) const {
	std::cout << "First name : " << this->_firstName << std::endl;
	std::cout << "Last name : " << this->_lastName << std::endl;
	std::cout << "Nick name : " << this->_nickName << std::endl;
	std::cout << "Login : " << this->_login << std::endl;
	std::cout << "Postal adress : " << this->_postalAdress << std::endl;
	std::cout << "Email : " << this->_email << std::endl;
	std::cout << "Phone number : " << this->_phoneNumber << std::endl;
	std::cout << "Birthday date : " << this->_birthdayDate << std::endl;
	std::cout << "Favorite meal : " << this->_favoriteMeal << std::endl;
	std::cout << "Underwear color : " << this->_underwearColor << std::endl;
	std::cout << "Darkest secret : " << this->_darkestSecret << std::endl;
}


void		Contact::displayFields( void ) const {
	std::string str = "0";

	std::cout << "|";
	str[0] = this->_index % 10 + '0';
	this->_displayOneField(str);
	this->_displayOneField(this->_firstName);
	this->_displayOneField(this->_lastName);
	this->_displayOneField(this->_nickName);
	std::cout << std::endl;
}

void		Contact::fillFields( void ) {
	this->enabled = 1;
	this->_firstName = this->_getInput((char*)"First Name");
	this->_lastName = this->_getInput((char*)"Last Name");
	this->_nickName = this->_getInput((char*)"Nick Name");
	this->_login = this->_getInput((char*)"Login");
	this->_postalAdress = this->_getInput((char*)"Postal adress");
	this->_email = this->_getInput((char*)"Email");
	this->_phoneNumber = this->_getInput((char*)"Phone number");
	this->_birthdayDate = this->_getInput((char*)"Birthday date");
	this->_favoriteMeal = this->_getInput((char*)"Favorite meal");
	this->_underwearColor = this->_getInput((char*)"Underwear color");
	this->_darkestSecret = this->_getInput((char*)"Darkest secret");
}

int			Contact::_nbInstances = 0;
