/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/09 21:35:16 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/10 01:25:10 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <cstdlib>

PresidentialPardonForm::PresidentialPardonForm(std::string target):
	Form(target, 25, 5)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src):
	Form(0, 0, 0)
{
	*this = src;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	return ;
}

PresidentialPardonForm &		PresidentialPardonForm::operator=( PresidentialPardonForm const & src ) {
	Form::operator=(src);
	return *this;
}

void						PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	Form::execute(executor);
	std::cout << getName() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
