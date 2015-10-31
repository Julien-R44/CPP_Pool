/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 05:32:16 by y0ja              #+#    #+#             */
/*   Updated: 2015/10/31 05:51:30 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>

class Pony {

public:
	Pony( std::string str );
	~Pony( void );

	void	sayName(void) const;

private:
	std::string _name;

};

#endif
