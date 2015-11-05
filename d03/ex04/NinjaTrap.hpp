/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 08:24:03 by jripoute          #+#    #+#             */
/*   Updated: 2015/11/05 03:10:20 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJA_TRAP_HPP
# define NINJA_TRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "ClapTrap.hpp"

class NinjaTrap : virtual public ClapTrap {

public:
	NinjaTrap( std::string name );
	NinjaTrap( NinjaTrap const & src);
	~NinjaTrap( void );

	void		ninjaShoebox( FragTrap const & src );
	void		ninjaShoebox( NinjaTrap const & src );
	void		ninjaShoebox( ClapTrap const & src );
	void		ninjaShoebox( ScavTrap const & src );

};

#endif
