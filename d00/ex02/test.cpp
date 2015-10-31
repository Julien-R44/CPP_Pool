/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 03:50:28 by y0ja              #+#    #+#             */
/*   Updated: 2015/10/31 03:54:03 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Test {

public:
	Test( int nb );
private:
	Test( void );

};

Test::Test(void) {
	std::cout << "FIRST CONSTRUCTOR" << std::endl;
}

Test::Test(int nb) {
	std::cout << "SECOND CONSTRUCTOR" << std::endl;
}

int main(void)
{
	Test tmp;
}
