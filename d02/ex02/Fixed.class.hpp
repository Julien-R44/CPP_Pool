/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/01 05:26:18 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/03 03:46:35 by jripoute         ###   ########.fr       */
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

	int						getRawBits( void ) const;
	void					setRawBits( int const raw );
	float					toFloat( void ) const;
	int						toInt( void ) const;

	// Operators overloading
		// Comparisons
	bool					operator>( Fixed const & rhs ) const;
	bool					operator<( Fixed const & rhs ) const;
	bool					operator>=( Fixed const & rhs ) const;
	bool					operator<=( Fixed const & rhs ) const;
	bool					operator==( Fixed const & rhs ) const;
	bool					operator!=( Fixed const & rhs ) const;
		// Arithmetic
	Fixed &					operator=( Fixed const & rhs );
	Fixed					operator+( Fixed const & rhs ) const;
	Fixed					operator-( Fixed const & rhs ) const;
	Fixed					operator*( Fixed const & rhs ) const;
	Fixed					operator/( Fixed const & rhs ) const;
		// Increments
	Fixed &					operator++( void );
	Fixed					operator++( int );
	Fixed &					operator--( void );
	Fixed					operator--( int );

	static Fixed &			min( Fixed & a, Fixed & b );
	static const Fixed &	min( Fixed const & a, Fixed const & b );

	static Fixed &			max( Fixed & a, Fixed & b );
	static const Fixed &	max( Fixed const & a, Fixed const & b );

private:
	int						_rawBits;
	static const int 		_fractionalBit;
};

std::ostream & operator<<( std::ostream & o, Fixed const & rhs);

#endif
