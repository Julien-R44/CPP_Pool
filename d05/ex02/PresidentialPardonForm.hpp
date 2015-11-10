/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/09 21:35:16 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/10 01:27:31 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM
# define PRESIDENTIALPARDONFORM

# include "Form.hpp"

class PresidentialPardonForm : public Form {

public:
	PresidentialPardonForm( std::string target );
	PresidentialPardonForm(PresidentialPardonForm const & src);
	~PresidentialPardonForm( void );

	PresidentialPardonForm &		operator=( PresidentialPardonForm const & src );

	virtual void				execute(Bureaucrat const & executor) const;

};

#endif
