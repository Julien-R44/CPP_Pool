/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 07:06:25 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/05 07:54:09 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICAL_MARINE_HPP
# define TACTICAL_MARINE_HPP

# include <iostream>
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {

public:
	TacticalMarine();
	TacticalMarine(TacticalMarine const & src);
	~TacticalMarine();


	ISpaceMarine		*clone() const;
	void				battleCry() const;
	void				rangedAttack() const;
	void				meleeAttack() const;

	TacticalMarine &	operator=( TacticalMarine const & src );

};

#endif
