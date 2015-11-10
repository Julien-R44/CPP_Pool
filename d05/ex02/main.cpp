/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/09 07:42:50 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/10 01:33:01 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main(void) {
	{
		Bureaucrat 				bureaucrat("John Doe", 1);
		ShrubberyCreationForm	form("three");

		bureaucrat.executeForm(form);
		try {
			form.execute(bureaucrat);
		} catch (Form::NotSignedException & e ) {
			std::cout << e.what() << std::endl;
		}

		form.beSigned(bureaucrat);
		form.execute(bureaucrat);
	}
	{
		Bureaucrat					bureaucrat("Sisi", 140);
		ShrubberyCreationForm		form("Three");

		std::cout << form << std::endl << bureaucrat << std::endl;
		form.beSigned(bureaucrat);

		bureaucrat.executeForm(form);
		try {
			form.execute(bureaucrat);
		} catch (std::exception & e ) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		Bureaucrat				bureaucrat("John doe", 1);
		RobotomyRequestForm		form("robot");
		PresidentialPardonForm 	form2("Presidential");

		std::cout << form << std::endl;
		std::cout << form2 << std::endl;

		bureaucrat.signForm(form);
		form.execute(bureaucrat);
		form.execute(bureaucrat);

		form2.beSigned(bureaucrat);
		form2.execute(bureaucrat);
	}
	return 0;
}
