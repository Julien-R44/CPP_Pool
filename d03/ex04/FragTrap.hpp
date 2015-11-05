/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 04:50:35 by jripoute          #+#    #+#             */
/*   Updated: 2015/11/05 03:09:59 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include <string>
# include <cstdlib>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

public:
	FragTrap( std::string name );
	FragTrap( FragTrap const & src);
	~FragTrap( void );

	void			vaulthunter_dot_exe( std::string const & target);

};

#endif
