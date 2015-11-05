/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Minion.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 04:18:25 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/05 04:21:28 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINION_HPP
# define MINION_HPP

# include <iostream>
# include "Peon.hpp"

class Minion : public Peon {

public:
	Minion( std::string name );
	Minion( Minion const & rhs );
	~Minion( void );

};

#endif
