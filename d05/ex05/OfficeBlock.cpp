/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/10 02:10:29 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/10 04:42:26 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock( void ) :
	_intern(NULL),
	_signer(NULL),
	_executor(NULL)
{

}

OfficeBlock::OfficeBlock( Intern *intern, Bureaucrat *signer, Bureaucrat *executor ):
	_intern(intern),
	_signer(signer),
	_executor(executor)
{
	return ;
}

OfficeBlock::~OfficeBlock( void ) {
	return;
}

void		OfficeBlock::doBureaucracy(std::string formName, std::string target) const throw(IncompleteOfficeException, Intern::InvalidFormNameException, Form::GradeTooLowException){
	Form *form;

	if ( !_intern || !_signer || !_executor )
		throw IncompleteOfficeException();
	form = _intern->makeForm(formName, target);
	_signer->signForm(*form);
	_executor->executeForm(*form);
	delete form;
}


void		OfficeBlock::setIntern(Intern & intern) {
	this->_intern = &intern;
}

void		OfficeBlock::setSigner(Bureaucrat & signer) {
	this->_signer = &signer;
}

void		OfficeBlock::setExecutor(Bureaucrat & executor) {
	this->_executor = &executor;
}

const char		*OfficeBlock::IncompleteOfficeException::what() const throw() {
	return "IncompleteOfficeException";
}
