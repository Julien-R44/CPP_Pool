/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/01 01:47:12 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/01 02:26:09 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main(void)
{
	Human	lePoto;

	lePoto.action("meleeAttack", "Haterz");
	lePoto.action("rangedAttack", "Haterz 2");;
	lePoto.action("intimidatingShout", "Haterz 3");;
	lePoto.action("rangedAttack", "Haterz 4");;
	lePoto.action("intimidatingShout", "Haterz 5");;
	lePoto.action("meleeAttack", "Haterz 6");
	lePoto.action("", "Haterzzzz");

	return (0);
}
