/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/10 01:37:23 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/10 17:42:23 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void ) {
	return ;
}

Intern::Intern( Intern const & src ) {
	*this = src;
	return;
}

Intern::~Intern( void ) {
	return;
}

Intern &	Intern::operator=( Intern const & src ) {
	(void)src;
	return *this;
}

Form			*Intern::makeForm(std::string const formName, std::string const target) const {
	Form		*form = NULL;

	if (formName == "robotomy request")
		form = new RobotomyRequestForm(target);
	else if (formName == "shrubbery creation")
		form = new ShrubberyCreationForm(target);
	else if (formName == "presidential pardon")
		form = new PresidentialPardonForm(target);
	else {
		std::cout << "Invalid form name";
		return (NULL);
	}
	std::cout << "Intern creates <" << formName << ">" << std::endl;
	return form;
}
