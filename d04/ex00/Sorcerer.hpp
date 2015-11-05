/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 03:28:06 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/05 03:52:49 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"


class Sorcerer {

public:
	Sorcerer( std::string const name, std::string const title);
	Sorcerer( Sorcerer const & rhs );
	~Sorcerer( void );

	std::string		getName( void ) const;
	std::string		getTitle( void ) const;

	void 			polymorph(Victim const & src) const;

	Sorcerer &		operator=(Sorcerer const & src);

private:
	std::string _name;
	std::string _title;

};

std::ostream &	operator<<( std::ostream & o, Sorcerer const & rhs);

#endif
