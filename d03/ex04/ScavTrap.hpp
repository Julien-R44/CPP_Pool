/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 04:50:35 by jripoute          #+#    #+#             */
/*   Updated: 2015/11/03 07:49:44 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:
	ScavTrap( std::string name );
	ScavTrap( ScavTrap const & src);
	~ScavTrap( void );

	void			challengeNewcomer( std::string const & target);

};

#endif
