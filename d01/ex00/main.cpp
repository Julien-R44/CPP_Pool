/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 05:30:42 by y0ja              #+#    #+#             */
/*   Updated: 2015/10/31 05:44:55 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap(void) {
	Pony	*DaPony = new Pony("SisiBg");

	DaPony->sayName();
	delete DaPony;
	return ;
}

void	ponyOnTheStack(void) {
	Pony	DaPony("El Depsos");

	DaPony.sayName();
	return ;
}


int main(void)
{
	std::cout << "---------- Stack Pony ----------" << std::endl;
	ponyOnTheStack();
	std::cout << "---------- Heap Pony ----------" << std::endl;
	ponyOnTheHeap();
	return 0;
}
