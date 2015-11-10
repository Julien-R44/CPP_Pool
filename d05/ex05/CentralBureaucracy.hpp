/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/10 03:37:09 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/10 04:21:30 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CENTRAL_BUREAUCRACY_HPP
# define CENTRAL_BUREAUCRACY_HPP

# include "Bureaucrat.hpp"
# include "OfficeBlock.hpp"

# define MAX_QUEUE 128

class CentralBureaucracy {
public:
	CentralBureaucracy( void );
	CentralBureaucracy(CentralBureaucracy const & src);
	~CentralBureaucracy( void );

	CentralBureaucracy &		operator=( CentralBureaucracy const & src );

	void						feedOffice(Bureaucrat & bureaucrat, int index);
	void						queueUp(std::string action);
	void						doBureaucracy(void);

private:
	OfficeBlock		_offices[20];
	std::string		*_queue[MAX_QUEUE];
};

#endif
