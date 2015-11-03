/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 08:24:03 by jripoute          #+#    #+#             */
/*   Updated: 2015/11/03 08:54:06 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJA_TRAP_HPP
# define NINJA_TRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "ClapTrap.hpp"

class NinjaTrap : public ClapTrap {

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
