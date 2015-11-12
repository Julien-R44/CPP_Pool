/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/11 23:12:25 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/12 01:28:13 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.tcc"

int main(void) {

	Array<int> 		tab(10);

	for (unsigned int i = 0; i < tab.size(); i++)
		std::cout << (tab[i] = 42) << " ";
	std::cout << std::endl;

	try {
		std::cout << tab[77] << std::endl;
	} catch (Array<int>::BadIndexException & e ) {
		std::cout << e.what() << std::endl;
	}

	Array<int>		cpyTab(tab);
	Array<int>		cpyTab2;

	cpyTab2 = cpyTab;
	for (unsigned int i = 0; i < cpyTab.size(); i++) {
		std::cout << cpyTab[i] << " ";
		std::cout << cpyTab2[i] << " ";
	}
	std::cout << std::endl;

	Array<std::string>	stringTab(3);

	for (unsigned int i = 0; i < 3; i++)
		std::cout << (stringTab[i] = "Bang") << std::endl;

	return (0);
}
