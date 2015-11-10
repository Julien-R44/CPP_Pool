/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/09 07:42:50 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/09 21:31:22 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main(void) {
	std::cout << "Bureaucrat -----------" << std::endl;
	{
		Bureaucrat *bureaucrat;
		try {
			bureaucrat = new Bureaucrat("John Doe", 152);
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
			bureaucrat = NULL;
		}
		delete bureaucrat;
	}
	{
		try {
			Bureaucrat bureaucrat("Sisi", 150);
			bureaucrat.decGrade();
		} catch (Bureaucrat::GradeTooHighException & e) {
			std::cout << "TOO HIGH BRUH" << std::endl;
		} catch (Bureaucrat::GradeTooLowException & e) {
			std::cout << "TOO LOW BRUH" << std::endl;
		}
	}
	{
		try {
			Bureaucrat bureaucrat("Genius", 1);
			bureaucrat.incGrade();
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
		Bureaucrat sisi("sisi", 24);
		std::cout << sisi << std::endl;
	}
	{
		std::cout << "Form -----------------" << std::endl;

		Form 			form("DaForm", 5, 5);
		Bureaucrat		bureaucrat("John", 2);

		std::cout << form << std::endl;
		std::cout << bureaucrat << std::endl;

		form.beSigned(bureaucrat);
		std::cout << form << std::endl;

		Form 			form2("DaForm", 1, 1);

		std::cout << form2 << std::endl;
		try {
			form2.beSigned(bureaucrat);
		} catch (Form::GradeTooLowException & e) {
			std::cout << e.what() << std::endl;
		}
		bureaucrat.signForm(form2);
	}
	return 0;
}
