/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/01 04:11:21 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/01 04:47:05 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char const **av) {
	std::istream	&in = std::cin;
	std::string		str;

	if (av[1]) {
		std::ifstream ifs(av[1]);

		if (ifs) {
			while (std::getline(ifs, str)) {
				std::cout << str << std::endl;
			}
		} else { std::cout << "Error: can't open this file." << std::endl; }
	} else {
		while (77) {
			std::getline(in, str);
			if (in.eof())
				break ;
			std::cout << str << std::endl;
		}
	}
}
