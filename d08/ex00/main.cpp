/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/12 01:52:55 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/12 02:46:54 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>
#include <iostream>

int main(void) {

	int ints[] = {16, 2, 77, 29, 42, 25};

	std::vector<int> vector (ints, ints + sizeof(ints) / sizeof(int) );
	std::cout << easyfind(vector, 77) << std::endl;
	std::cout << easyfind(vector, 25) << std::endl;
	std::cout << easyfind(vector, 0) << std::endl << std::endl;

	std::list<int> list (ints, ints + sizeof(ints) / sizeof(int));
	std::cout << easyfind(list, 77) << std::endl;
	std::cout << easyfind(list, 25) << std::endl;
	std::cout << easyfind(list, 0) << std::endl << std::endl;

	std::deque<int> deque (ints, ints + sizeof(ints) / sizeof(int));
	std::cout << easyfind(deque, 77) << std::endl;
	std::cout << easyfind(deque, 25) << std::endl;
	std::cout << easyfind(deque, 0) << std::endl << std::endl;
	return (0);
}
