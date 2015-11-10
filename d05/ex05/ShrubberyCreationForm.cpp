/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/09 21:34:45 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/10 04:29:09 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
	Form(target, 145, 137)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src):
	Form(0, 0, 0)
{
	*this = src;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	return ;
}

ShrubberyCreationForm &		ShrubberyCreationForm::operator=( ShrubberyCreationForm const & src ) {
	Form::operator=(src);
	return *this;
}

void						ShrubberyCreationForm::execute(Bureaucrat const & executor) const throw(GradeTooLowException, NotSignedException) {
	Form::execute(executor);
	std::string filename = getName() + "_shrubbery";
	std::ofstream 	ofs(filename.c_str());

	if (ofs) {
		ofs << "             ,@@@@@@@," << std::endl;
		ofs << "     ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
		ofs << "  ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
		ofs << " ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
		ofs << " %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
		ofs << " %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
		ofs << " `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
		ofs << "     |o|        | |         | |" << std::endl;
		ofs << "     |.|        | |         | |" << std::endl;
		ofs << " \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_" << std::endl;
	}
}
