/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/10 01:12:08 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/10 01:21:19 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form {

public:
	RobotomyRequestForm( std::string target );
	RobotomyRequestForm(RobotomyRequestForm const & src);
	~RobotomyRequestForm( void );

	RobotomyRequestForm &		operator=( RobotomyRequestForm const & src );

	virtual void				execute(Bureaucrat const & executor) const;

};

#endif
