/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 07:06:25 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/05 08:08:00 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"

class Squad: public ISquad {

public:
	Squad(void);
	Squad(Squad const & src);
	~Squad(void);

	int				getCount( void ) const;
	ISpaceMarine 	*getUnit( int i ) const;
	int				push(ISpaceMarine *marine);

	Squad &		operator=( Squad const & src );

private:
	int				_count;
	ISpaceMarine 	*_squad;

};

#endif
