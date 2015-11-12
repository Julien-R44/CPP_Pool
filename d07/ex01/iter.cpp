/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/11 22:39:34 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/11 23:11:25 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
void		iter(T *tab, size_t size, void (*f)(T&)) {
	for (size_t i = 0; i < size; i++)
		(*f)(tab[i]);
}


template<typename T>
void		incThis(T &thing) {
	thing += 1;
}

template<typename T>
void		printThis(T & thing) {
	std::cout << thing << " ";
}

template<typename T>
void		test(T *tab, size_t size) {
	iter<T>(tab, size, &printThis<T>);
	std::cout << std::endl;

	iter(tab, size, &incThis<T>);

	iter<T>(tab, size, &printThis<T>);
	std::cout << std::endl;
}

int main(void) {
	int 		intTab[] = {1, 2, 3, 4, 5, 6};
	char		array[] = "123456";

	std::cout << "Int array: " << std::endl;
	test(intTab, 6);
	std::cout << "Char array: " << std::endl;
	test(array, 6);
	return (0);
}
