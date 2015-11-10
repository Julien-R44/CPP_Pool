/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/09 08:44:36 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/10 01:08:13 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form( std::string name, int signGrade, int execGrade ) throw(GradeTooHighException, GradeTooLowException) :
	_name(name),
	_signed(false),
	_signRequiredGrade(signGrade),
	_execRequiredGrade(execGrade)
{
	if (_signRequiredGrade > 150 || _execRequiredGrade > 150)
		throw Form::GradeTooLowException();
	if (_signRequiredGrade < 1 || _execRequiredGrade < 1)
		throw Form::GradeTooHighException();
	return ;
}

Form::Form(Form const & src): _name(0), _signed(false), _signRequiredGrade(0), _execRequiredGrade(0) {
	*this = src;
}

Form::~Form( void ) {
	return ;
}

Form &		Form::operator=( Form const & src ) {
	_signed = src._signed;
	return *this;
}

void		Form::beSigned(Bureaucrat const & src) throw(Form::GradeTooLowException) {
	if (src.getGrade() <= this->_signRequiredGrade)
		this->_signed = true;
	else
		throw Form::GradeTooLowException();
}

void		Form::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() > _execRequiredGrade)
		throw Form::GradeTooLowException();
	if (_signed == false)
		throw Form::NotSignedException();
}

std::ostream &		operator<<( std::ostream & o, Form const & rhs ) {
	o << "Name [" << rhs.getName() << "], signed ? [" << std::boolalpha << rhs.getSigned() << "]";
	o << ", sign required grade [" << rhs.getSignRequiredGrade() << "]";
	o << ", execute required grade [" << rhs.getExecRequiredGrade() << "]";
	return o;
}

// Getters
std::string const & Form::getName( void ) const { return this->_name; }
bool				Form::getSigned( void ) const { return this->_signed; }
int					Form::getSignRequiredGrade( void ) const { return this->_signRequiredGrade; }
int					Form::getExecRequiredGrade( void ) const { return this->_execRequiredGrade; }

// Exceptions
const char			*Form::GradeTooHighException::what() const throw() { return "Form::GradeTooHighException";}
const char			*Form::GradeTooLowException::what() const throw() { return "Form::GradeTooLowException";}
const char			*Form::NotSignedException::what() const throw() { return "Form::NotSignedException";}
