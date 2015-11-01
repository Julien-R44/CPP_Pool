/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 05:49:21 by y0ja              #+#    #+#             */
/*   Updated: 2015/10/31 22:36:27 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <cstdlib>

class Zombie {

public:
	Zombie( void );
	Zombie( std::string name, std::string type);
	~Zombie( void );

	void	announce(void);

private:
	std::string		_name;
	std::string		_type;

};

#endif
