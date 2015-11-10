/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/09 07:42:50 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/10 04:43:04 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"
#include "CentralBureaucracy.hpp"
#include <iostream>
#include <sstream>
#include <stdlib.h>

std::string		itoa(int i)
{
	std::stringstream s;
	s << i;
	return (s.str());
}

int main(void) {
	CentralBureaucracy		central;

	for (int i = 0; i < 20; i++) {
		std::string str1 = "Bureaucrat1:" + itoa(i);
		central.feedOffice(*new Bureaucrat("Bureaucrat1:" + itoa(i), 1), i);
		if (rand() % 2 == 0)
			central.feedOffice(*new Bureaucrat("Bureaucrat2:" + itoa(i), 1), i);
	}

	central.queueUp("presidential pardon");
	central.queueUp("robotomy request");
	central.queueUp("shrubbery creation");
	central.queueUp("robotomy request");
	central.queueUp("presidential pardon");
	central.queueUp("robotomy request");
	central.queueUp("shrubbery creation");
	central.queueUp("robotomy request");
	central.queueUp("robotomy request");
	central.queueUp("robotomy request");
	central.queueUp("presidential pardon");
	central.queueUp("presidential pardon");
	central.queueUp("robotomy request");
	central.queueUp("shrubbery creation");
	central.queueUp("robotomy request");
	central.queueUp("robotomy request");
	central.queueUp("robotomy request");

	central.doBureaucracy();
	return (0);
}
