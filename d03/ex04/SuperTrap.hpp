/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 08:57:58 by jripoute          #+#    #+#             */
/*   Updated: 2015/11/05 03:09:50 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPER_TRAP_HPP
# define SUPER_TRAP_HPP

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"
# include "ClapTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {

public:
	SuperTrap( std::string name );
	SuperTrap( SuperTrap const & src );
	~SuperTrap( void );

};


#endif
