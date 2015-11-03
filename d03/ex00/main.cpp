/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 04:50:19 by jripoute          #+#    #+#             */
/*   Updated: 2015/11/03 06:12:42 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void	firstTest(void) {
	FragTrap		clap("CLAPTRAP ONE");
	FragTrap		clap2(clap);
	FragTrap		clap3 = clap2;

	std::cout << clap << std::endl;
	std::cout << clap2 << std::endl;
	std::cout << clap3 << std::endl;
}

int main(int ac, char **av) {
	firstTest();

	FragTrap clap("El Depsos del plancha");

	std::cout << clap << std::endl;
	clap.rangedAttack("BONJOUR");
	clap.meleeAttack("AUREVOIR");
	clap.takeDamage(6);
	clap.takeDamage(0);
	clap.takeDamage(500);
	clap.takeDamage(10);
	clap.beRepaired(5000);
	std::cout << clap << std::endl;
	clap.vaulthunter_dot_exe("Jean Michel");
	clap.vaulthunter_dot_exe("Jean Marcelin");
	clap.vaulthunter_dot_exe("Jean Jean");
	clap.vaulthunter_dot_exe("Jean Deux");
	clap.vaulthunter_dot_exe("Jean Deux");
	std::cout << clap << std::endl;
	return (0);
}
