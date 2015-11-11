/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/11 19:58:42 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/11 19:59:27 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

void dumpData(Data* d)
{
	std::cout << "dump:" << std::endl;
	std::cout << "d: " << d->s1 << std::endl;
	std::cout << "d: " << d->s2 << std::endl;
	std::cout << "n: " << d->n << std::endl;
}

int main()
{
	srand (time(NULL));

	void* s = serialize();
	Data* d = deserialize(s);
	dumpData(d);
	Data sd;
	sd.s1 = "11111111";
	sd.s2 = "2222";
	sd.n = 9;
	dumpData(&sd);
	return 0;
}
