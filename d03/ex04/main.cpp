/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 04:50:19 by jripoute          #+#    #+#             */
/*   Updated: 2015/11/05 03:11:14 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main(int ac, char **av)
{
	SuperTrap super("Super Trap");


	super.vaulthunter_dot_exe("da target");
	super.ninjaShoebox(ScavTrap("SCAVTRAP"));
	std::cout << super << std::endl;
	return (0);
}
