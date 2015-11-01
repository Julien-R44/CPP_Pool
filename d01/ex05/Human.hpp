/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 22:45:29 by y0ja              #+#    #+#             */
/*   Updated: 2015/10/31 23:01:20 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <iostream>
# include "Brain.hpp"

class Human {

public:
	Human( void );
	~Human( void );

	std::string		identify( void ) const;
	const Brain		getBrain( void ) const;

private:
	const Brain _brain;

};


#endif
