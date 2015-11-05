/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 04:52:40 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/05 05:16:46 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMA_RIFLE_HPP
# define PLASMA_RIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {

public:
	PlasmaRifle( void );
	PlasmaRifle( PlasmaRifle const & src );
	~PlasmaRifle( void );

	PlasmaRifle &		operator=(PlasmaRifle const & src);

	void				attack(void) const;
};

#endif
