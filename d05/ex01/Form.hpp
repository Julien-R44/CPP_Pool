/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/09 08:44:36 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/09 21:28:35 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Form {

public:
	class GradeTooHighException : public std::exception {
		public:
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception {
		public:
		virtual const char* what() const throw();
	};

	Form( std::string name, int signGrade, int execGrade ) throw(GradeTooLowException, GradeTooHighException);
	Form(Form const & src);
	~Form( void );

	Form &		operator=( Form const & src );

	void				beSigned(Bureaucrat const & src) throw(GradeTooLowException);

	std::string const &	getName( void ) const ;
	bool				getSigned( void ) const ;
	int					getSignRequiredGrade( void ) const ;
	int					getExecRequiredGrade( void ) const ;

private:
	std::string const 	_name;
	bool				_signed;
	int	const			_signRequiredGrade;
	int	const			_execRequiredGrade;
};

std::ostream &			operator<<( std::ostream & o, Form const & rhs );

#endif
