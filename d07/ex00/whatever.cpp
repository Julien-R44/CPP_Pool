/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/11 22:24:29 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/11 22:37:11 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
T const &	max(T const & a, T const & b) {
	return ( a >= b ? a : b );
}

template<typename T>
T const &	min(T const & a, T const & b) {
	return ( a < b ? a : b );
}

template<typename T>
void		swap(T & a, T & b) {
	T tmp = a;

	a = b;
	b = tmp;
}

template<typename T>
void		test(T & a, T & b) {
	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
}

int main( void ) {
	int 		a = 2;
	int 		b = 3;

	double 		pi = 3.14159265359;
	double 		golden = 1.61803398875;

	std::string	str1 = "chaine1";
	std::string	str2 = "chaine2";

	std::cout << "int" << std::endl;
	test(a, b);
	std::cout << "string" << std::endl;
	test(str1, str2);
	std::cout << "double" << std::endl;
	test(pi, golden);
	return 0;
}
