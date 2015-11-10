/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/10 01:12:14 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/10 01:21:06 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(std::string target):
	Form(target, 72, 45)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src):
	Form(0, 0, 0)
{
	*this = src;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	return ;
}

RobotomyRequestForm &		RobotomyRequestForm::operator=( RobotomyRequestForm const & src ) {
	Form::operator=(src);
	return *this;
}

void						RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	Form::execute(executor);

	std::cout << "SOME DRILLING NOISES BRUH" << std::endl;
	if ((rand() % 2) == 0)
		std::cout << getName() << " has been robotomized succesfully." << std::endl;
	else
		std::cout << getName() << " has been failed." << std::endl;
}
