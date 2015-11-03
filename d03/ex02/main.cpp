/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 04:50:19 by jripoute          #+#    #+#             */
/*   Updated: 2015/11/03 08:55:15 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(int ac, char **av)
{
	{
		FragTrap clap("El Depsos del plancha");
		std::cout << clap << std::endl;
		clap.vaulthunter_dot_exe("Da Target");
	}
	{
		ScavTrap scav("Izi izi izi");
		std::cout << scav << std::endl;
		scav.challengeNewcomer("Da Second Target");
	}
	return (0);
}
