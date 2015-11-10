/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/09 07:42:50 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/10 02:04:25 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main(void) {
	Bureaucrat	bureaucrat("John Doe", 1);
	Intern 		randomIntern;
	Form		*form;

	form = randomIntern.makeForm("robotomy request", "Bender");
	bureaucrat.executeForm(*form);
	bureaucrat.signForm(*form);
	bureaucrat.executeForm(*form);
	delete form;
	form = randomIntern.makeForm("shrubbery creation", "three");
	bureaucrat.signForm(*form);
	bureaucrat.executeForm(*form);
	delete form;
	form = randomIntern.makeForm("presidential pardon", "pardon");
	bureaucrat.signForm(*form);
	bureaucrat.executeForm(*form);
	delete form;
	return 0;
}
