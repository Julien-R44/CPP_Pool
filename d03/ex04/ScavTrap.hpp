/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 04:50:35 by jripoute          #+#    #+#             */
/*   Updated: 2015/11/05 02:55:07 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include <string>
# include <cstdlib>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:
	ScavTrap( std::string name );
	ScavTrap( ScavTrap const & src);
	~ScavTrap( void );

	void			challengeNewcomer( std::string const & target);

};

#endif
