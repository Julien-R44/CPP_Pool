/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/01 05:26:23 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/01 06:39:01 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed( void ) : _value(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( Fixed const & src ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

float		Fixed::toFloat( void ) const {
	return 22.2f;
}

int			Fixed::toInt( void ) const {
	return 22;
}

int				Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void			Fixed::setRawBits( int const raw ) {
	this->_value = raw;
}

Fixed &			Fixed::operator=( Fixed const & rhs ) {
	std::cout << "Assignation operator called" << std::endl;
	this->_value = rhs.getRawBits();

	return *this;
}

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs ) {
	o << rhs.getRawBits();
	return o;
}

const int Fixed::_nbDecimal = 8;
