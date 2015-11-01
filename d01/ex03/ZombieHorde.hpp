/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 22:05:53 by y0ja              #+#    #+#             */
/*   Updated: 2015/10/31 22:37:20 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP

# include "Zombie.hpp"

class ZombieHorde {

public:
	ZombieHorde( int n );
	~ZombieHorde();

	void	announce( void ) const;

private:
	Zombie *_hordeArray;
	int		_hordeArrayLen;

};

#endif
