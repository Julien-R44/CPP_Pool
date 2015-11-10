/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/09 07:42:50 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/09 21:30:34 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat( std::string name, int grade ) throw(GradeTooLowException, GradeTooHighException):
	_name(name),
	_grade(grade)
{
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	return ;
}

Bureaucrat::Bureaucrat( Bureaucrat const & src ) {
	*this = src;
}

Bureaucrat::~Bureaucrat( void ) {
	return ;
}

Bureaucrat & 	Bureaucrat::operator=( Bureaucrat const & src ) {
	this->_grade = src._grade;
	return *this;
}

// Incrementers
void				Bureaucrat::incGrade( void ) throw(GradeTooHighException) {
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

void				Bureaucrat::decGrade( void ) throw(GradeTooLowException) {
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

void				Bureaucrat::signForm( Form & form ) const {
	try {
		form.beSigned(*this);
		std::cout << _name << "signs form [" << form.getName() << "]" << std::endl;
	} catch (Form::GradeTooLowException & e) {
		std::cout << _name << " cannot sign form [" << form.getName() << "] because";
		std::cout << " " << e.what() << std::endl;
	}
}

// Getters
std::string	const &	Bureaucrat::getName( void ) const { return this->_name; }
int					Bureaucrat::getGrade( void ) const { return this->_grade; }

std::ostream &		operator<<( std::ostream & o, Bureaucrat const & rhs ) {
	o << "<" << rhs.getName() << ">, bureaucrat grade <" << rhs.getGrade() << ">";
	return o;
}

const char	*Bureaucrat::GradeTooHighException::what() const throw() {
	return "GradeTooHighException";
}

const char	*Bureaucrat::GradeTooLowException::what() const throw() {
	return "GradeTooHighException";
}
