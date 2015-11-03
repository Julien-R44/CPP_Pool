/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/01 05:33:00 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/03 04:43:23 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <sstream>
#include <string>
#include "Fixed.class.hpp"

int main( int ac, char **av ) {
	if (ac != 2) {
		std::cout << "Usage: ./eval_expr <simple arithmetic expression>" << std::endl;
		return 1;
	}

    std::string s(av[1]);
    std::istringstream iss(s);

    do
    {
        std::string sub;
        iss >> sub;
        std::cout << "Substring: " << sub << std::endl;

    } while (iss);

}
