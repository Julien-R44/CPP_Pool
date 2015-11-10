/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/10 01:37:23 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/10 03:30:14 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include <string>

class Intern {

public:
	class InvalidFormNameException : public std::exception {
		public:
		virtual const char *what() const throw();
	};
	Intern( void );
	Intern(Intern const & src);
	~Intern( void );

	Intern &		operator=( Intern const & src );

	Form			*makeForm(std::string const formName, std::string const target) const throw(InvalidFormNameException);

};

#endif
