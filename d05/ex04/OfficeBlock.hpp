/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/10 02:10:29 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/10 17:44:04 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICE_BLOCK_HPP
# define OFFICE_BLOCK_HPP

# include "Intern.hpp"
# include "Bureaucrat.hpp"

class OfficeBlock {

public:
	class IncompleteOfficeException : public std::exception {
		public:
		virtual const char *what() const throw();
	};
	OfficeBlock( void );
	OfficeBlock( Intern *intern, Bureaucrat *signer, Bureaucrat *executor );
	virtual ~OfficeBlock( void );

	void		doBureaucracy(std::string formName, std::string target) const throw(IncompleteOfficeException, Intern::InvalidFormNameException, Form::GradeTooLowException);
	void		setIntern(Intern & intern);
	void		setSigner(Bureaucrat & signer);
	void		setExecutor(Bureaucrat & executor);

private:
	Intern		*_intern;
	Bureaucrat 	*_signer;
	Bureaucrat 	*_executor;

};

#endif
