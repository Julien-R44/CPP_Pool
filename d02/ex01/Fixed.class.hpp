/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/01 05:26:18 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/03 00:08:51 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>
# include <cmath>
# include <stdlib.h>

class Fixed {

public:
	Fixed( void );
	Fixed( int const value );
	Fixed( float const value );
	Fixed( Fixed const & src );
	~Fixed( void );

	int			getRawBits( void ) const;
	void		setRawBits( int const raw );
	float		toFloat( void ) const;
	int			toInt( void ) const;

	// Operators overloading
	Fixed &		operator=( Fixed const & rhs );

private:
	int					_rawBits;
	static const int 	_fractionalBit;
};

std::ostream & operator<<( std::ostream & o, Fixed const & rhs);

#endif
