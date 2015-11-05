/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 04:25:30 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/05 06:21:38 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAD_SCORPION_HPP
# define RAD_SCORPION_HPP

# include "Enemy.hpp"

class RadScorpion : public Enemy {
public:
	RadScorpion(void);
	RadScorpion(RadScorpion const & src);
	~RadScorpion(void);

	void				takeDamage( int dmg );

	RadScorpion &		operator=(RadScorpion const & src);
};

#endif
