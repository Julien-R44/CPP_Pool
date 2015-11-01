/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/01 05:26:18 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/01 06:35:52 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>

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

	Fixed &		operator=( Fixed const & rhs );


private:
	int					_value;
	static const int 	_nbDecimal;
};

std::ostream & operator<<( std::ostream & o, Fixed const & rhs);

#endif
