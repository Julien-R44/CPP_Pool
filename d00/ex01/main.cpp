/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/07 06:02:50 by y0ja              #+#    #+#             */
/*   Updated: 2015/07/07 06:46:05 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"

#define BUFF_SIZE 512

std::string	*str_toupper(std::string *str) {
	for (std::string::iterator it = str->begin(); it != str->end(); it++) {
		*it = toupper(*it);
	}
	return (str);
}

int		main(void)
{
	bool		end = false;
	PhoneBook	PhoneBook;
	std::string	str;

	while (end == false) {
		std::cout << "What do you want? (ADD, SEARCH, EXIT) : ";
		std::getline(std::cin, str);
		str_toupper(&str);
		if (str.compare("ADD") == 0)
			PhoneBook.addContact();
		else if (str.compare("SEARCH") == 0)
			PhoneBook.search();
		else if (str.compare("EXIT") == 0)
			end = true;
		else
			std::cout << "[" << str << "]" << " is invalid input." << std::endl;
	}
	return (0);
}
