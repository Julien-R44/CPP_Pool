/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/09 21:34:45 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/10 01:08:35 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

# include "Form.hpp"

class ShrubberyCreationForm : public Form {

public:
	ShrubberyCreationForm( std::string target );
	ShrubberyCreationForm(ShrubberyCreationForm const & src);
	~ShrubberyCreationForm( void );

	ShrubberyCreationForm &		operator=( ShrubberyCreationForm const & src );

	virtual void				execute(Bureaucrat const & executor) const;
};

#endif
