/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/01 05:26:23 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/02 07:00:52 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed( void ) : _rawBits(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( Fixed const & src ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::Fixed( int const value ) {
	std::cout << "Int constructor called"  << std::endl;
	this->_rawBits = value << Fixed::_fractionalBit;
	return ;
}

Fixed::Fixed( float const value ) {
	std::cout << "Float constructor called" << std::endl;
	this->_rawBits = roundf(value * (1 << Fixed::_fractionalBit));
	return ;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

float		Fixed::toFloat( void ) const {
	return (float) this->_rawBits / (1 << Fixed::_fractionalBit);
}

int			Fixed::toInt( void ) const {
	return this->_rawBits >> Fixed::_fractionalBit;
}

int				Fixed::getRawBits( void ) const {
	return this->_rawBits;
}

void			Fixed::setRawBits( int const raw ) {
	this->_rawBits = raw;
}

Fixed &			Fixed::operator=( Fixed const & rhs ) {
	std::cout << "Assignation operator called" << std::endl;
	this->_rawBits = rhs.getRawBits();
	return *this;
}


std::ostream &	operator<<( std::ostream & o, Fixed const & rhs ) {
	o << rhs.toFloat();
	return o;
}

const int Fixed::_fractionalBit = 8;
