/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 04:25:52 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/05 07:02:11 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "Character.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int main()
{
	{
		Character* zaz = new Character("zaz");
		std::cout << *zaz;
		Enemy* b = new RadScorpion();
		AWeapon* pr = new PlasmaRifle();
		AWeapon* pf = new PowerFist();

		zaz->equip(pr);
		std::cout << *zaz;
		zaz->equip(pf);
		zaz->attack(b);
		std::cout << *zaz;
		zaz->equip(pr);
		std::cout << *zaz;
		zaz->attack(b);
		std::cout << *zaz;
		zaz->attack(b);
		std::cout << *zaz;
	}
	{
		Character *lol = new Character("Bandit");
		Enemy *b = new SuperMutant();

		lol->equip(new PowerFist());
		lol->attack(b);
		std::cout << *lol;
		lol->recoverAP();
		std::cout << *lol;
	}
	return 0;
}
