/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 04:25:20 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/05 06:21:29 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPER_MUTANT_HPP
# define SUPER_MUTANT_HPP

# include "Enemy.hpp"

class SuperMutant : public Enemy {
public:
	SuperMutant(void);
	SuperMutant(SuperMutant const & src);
	~SuperMutant(void);

	void				takeDamage( int dmg );
	SuperMutant &		operator=(SuperMutant const & src);
};

#endif
