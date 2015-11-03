/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 22:45:29 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/03 09:17:37 by jripoute         ###   ########.fr       */
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
	const Brain		&getBrain( void ) const;

private:
	const Brain _brain;

};


#endif
