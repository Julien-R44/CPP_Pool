/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 03:28:06 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/05 04:22:25 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"
#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Minion.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Minion bogosse("Bogosse");

	std::cout << robert << jim << joe << bogosse;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(bogosse);
	return 0;
}
