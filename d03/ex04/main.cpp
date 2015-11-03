/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 04:50:19 by jripoute          #+#    #+#             */
/*   Updated: 2015/11/03 08:55:52 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(int ac, char **av)
{
	NinjaTrap ninja("Ninjaaaa");
	std::cout << ninja << std::endl;
	ninja.ninjaShoebox(FragTrap("Frag"));
	ninja.ninjaShoebox(NinjaTrap("Ninja"));
	ninja.ninjaShoebox(ScavTrap("Scav"));
	ninja.ninjaShoebox(ClapTrap("Clap"));
	return (0);
}
