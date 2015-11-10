/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 07:06:25 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/05 07:38:09 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACE_MARINE_HPP
# define ISPACE_MARINE_HPP

class ISpaceMarine {

public:
	virtual ~ISpaceMarine() {}

	virtual ISpaceMarine*	clone() const = 0;
	virtual void 			battleCry() const = 0;
	virtual void 			rangedAttack() const = 0;
	virtual void 			meleeAttack() const = 0;
};

#endif
