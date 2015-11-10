/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/10 01:37:23 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/10 17:43:51 by y0ja             ###   ########.fr       */
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

Form			*Intern::makeForm(std::string const formName, std::string const target) const throw(InvalidFormNameException) {
	Form		*form = NULL;

	if (formName == "robotomy request")
		form = new RobotomyRequestForm(target);
	else if (formName == "shrubbery creation")
		form = new ShrubberyCreationForm(target);
	else if (formName == "presidential pardon")
		form = new PresidentialPardonForm(target);
	else
		throw InvalidFormNameException();
	std::cout << "Intern creates <" << formName << ">" << std::endl;
	return form;
}

const char		*Intern::InvalidFormNameException::what() const throw() {
	return "InvalidFormNameException";
}
