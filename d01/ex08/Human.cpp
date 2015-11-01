/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/01 01:47:12 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/01 02:25:37 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void	Human::meleeAttack(std::string const & target) {
	std::cout << "Human melee Attack " << target << std::endl;
}

void	Human::rangedAttack(std::string const & target) {
	std::cout << "Human ranged Attack " << target << std::endl;
}

void	Human::intimidatingShout(std::string const & target) {
	std::cout << "Human intimidating Shout " << target << std::endl;
}

void 	Human::action(std::string const & action_name, std::string const & target) {
	void	(Human::*ptrFunc[3])(std::string const &) = {
		ptrFunc[0] = &Human::meleeAttack,
		ptrFunc[1] = &Human::rangedAttack,
		ptrFunc[2] = &Human::intimidatingShout
	};
	std::string	funcName[3] = {
		std::string("meleeAttack"),
		std::string("rangedAttack"),
		std::string("intimidatingShout")
	};

	for (int i = 0; i < 3; i++) {
		if (strcmp(action_name.c_str(), funcName[i].c_str()) == 0)
			(this->*ptrFunc[i])(target);
	};

}
