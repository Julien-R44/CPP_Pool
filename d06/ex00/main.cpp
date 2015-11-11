/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/10 06:48:10 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/11 04:42:28 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Convert.hpp"

int main(int ac, char const *av[]) {
	if (ac != 2) {
		std::cout << "usage: ./convert <value>" << std::endl;
		return (1);
	}

	Convert		converter(av[1]);

	try {
		std::cout << "Char : ";
		char c = converter;
		std::cout << '\'' << c << '\'' << std::endl;
	} catch (Convert::NotDisplayable & e) {
		std::cout << "Non displayable" << std::endl;
	} catch (std::exception & e ) {
		std::cout << "impossible" << std::endl;
	}

	try {
		std::cout << "Int : ";
		int n = converter;
		std::cout << n << std::endl;
	} catch (std::exception & e) {
		std::cout << "impossible" << std::endl;
	}

	try {
		std::cout << "Float : ";
		float n = converter;
		std::cout << n << std::endl;
	} catch (std::exception & e) {
		std::cout << "impossible" << std::endl;
	}

	try {
		std::cout << "Double : ";
		double n = converter;
		std::cout << n << std::endl;
	} catch ( std::exception & e ) {
		std::cout << "impossible" << std::endl;
	}
	return 0;
}
