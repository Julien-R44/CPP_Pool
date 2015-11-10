/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/09 07:42:50 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/10 03:28:51 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"
#include <iostream>

int main(void) {
	Intern idiotOne;
	Bureaucrat hermes = Bureaucrat("Hermes Conrad", 37);
	Bureaucrat bob = Bureaucrat("Bobby Bobson", 123);
	OfficeBlock ob;
	ob.setIntern(idiotOne);
	ob.setSigner(bob);
	ob.setExecutor(hermes);
	try {
		ob.doBureaucracy("shrubbery creation", "Pigley");
	} catch (OfficeBlock::IncompleteOfficeException & e) {
		std::cout << e.what() << std::endl;
	} catch (Form::GradeTooLowException & e) {
		std::cout << e.what() << std::endl;
	}

	OfficeBlock	ob2;

	try {
		ob2.doBureaucracy("presidential pardon", "John Doe");
	} catch (OfficeBlock::IncompleteOfficeException & e) {
		std::cout << e.what() << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		ob.doBureaucracy("cacac", "John Doe");
	} catch (OfficeBlock::IncompleteOfficeException & e) {
		std::cout << e.what() << std::endl;
	} catch (Intern::InvalidFormNameException & e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
