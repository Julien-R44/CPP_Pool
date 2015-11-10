/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/09 07:42:50 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/09 08:41:46 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main(void) {
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
	return 0;
}
