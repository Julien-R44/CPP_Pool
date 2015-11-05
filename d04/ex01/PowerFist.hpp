/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 04:25:17 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/05 06:12:22 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWER_FIRST_HPP
# define POWER_FIRST_HPP

# include <iostream>
# include "AWeapon.hpp"

class PowerFist : public AWeapon {

public:
	PowerFist( void );
	PowerFist( PowerFist const & src );
	~PowerFist( void );

	PowerFist &		operator=(PowerFist const & src);

	void				attack(void) const;
};

#endif
