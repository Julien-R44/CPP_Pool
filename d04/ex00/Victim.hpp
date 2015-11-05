/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 03:28:06 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/05 03:48:18 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class Victim {

public:
	Victim( std::string const name );
	Victim( Victim const & rhs );
	~Victim( void );

	std::string		getName( void ) const;
	void 			getPolymorphed( void ) const;

	Victim &		operator=( Victim const & src );

private:
	std::string _name;

};

std::ostream &	operator<<(std::ostream & o, Victim const & rhs);

#endif
