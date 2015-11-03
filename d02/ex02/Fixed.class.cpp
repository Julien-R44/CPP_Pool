/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/01 05:26:23 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/03 03:47:28 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed( void ) : _rawBits(0) {
	return ;
}

Fixed::Fixed( Fixed const & src ) {
	*this = src;
	return ;
}

Fixed::Fixed( int const value ) {
	this->_rawBits = value << Fixed::_fractionalBit;
	return ;
}

Fixed::Fixed( float const value ) {
	this->_rawBits = roundf(value * (1 << Fixed::_fractionalBit));
	return ;
}

Fixed::~Fixed( void ) {
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

/* OPERATORS OVERLOADING */
	/* COMPARISONS 	*/
bool			Fixed::operator>( Fixed const & rhs ) const {
	if (this->toFloat() > rhs.toFloat())
		return true;
	return false;
}

bool			Fixed::operator<( Fixed const & rhs ) const {
	if (this->toFloat() < rhs.toFloat())
		return true;
	return false;
}

bool			Fixed::operator>=( Fixed const & rhs ) const {
	if (this->toFloat() >= rhs.toFloat())
		return true;
	return false;
}

bool			Fixed::operator<=( Fixed const & rhs ) const {
	if (this->toFloat() <= rhs.toFloat())
		return true;
	return false;
}

bool			Fixed::operator==( Fixed const & rhs ) const {
	if (this->toFloat() == rhs.toFloat())
		return true;
	return false;
}

bool			Fixed::operator!=( Fixed const & rhs ) const {
	if (this->toFloat() != rhs.toFloat())
		return true;
	return false;
}

	/* ARITHMETIC  */
Fixed &			Fixed::operator=( Fixed const & rhs ) {
	this->_rawBits = rhs.getRawBits();
	return *this;
}

Fixed			Fixed::operator+( Fixed const & rhs ) const { return Fixed(this->toFloat() + rhs.toFloat()); }
Fixed			Fixed::operator-( Fixed const & rhs ) const { return Fixed(this->toFloat() - rhs.toFloat()); }
Fixed			Fixed::operator*( Fixed const & rhs ) const { return Fixed(this->toFloat() * rhs.toFloat()); }
Fixed			Fixed::operator/( Fixed const & rhs ) const { return Fixed(this->toFloat() / rhs.toFloat()); }

Fixed &			Fixed::operator++( void ) {
	++this->_rawBits;
	return (*this);
}

Fixed			Fixed::operator++( int ) {
	Fixed result(*this);

	this->_rawBits++;
	return result;
}

Fixed &			Fixed::operator--( void ) {
	--this->_rawBits;
	return (*this);
}

Fixed			Fixed::operator--( int ) {
	Fixed result(*this);

	this->_rawBits--;
	return result;
}


std::ostream &	operator<<( std::ostream & o, Fixed const & rhs ) {
	o << rhs.toFloat();
	return o;
}

/* Non members */
Fixed &		Fixed::min( Fixed & a, Fixed & b ) {
	if (a > b)
		return b;
	return a;
}

Fixed &		Fixed::max( Fixed & a, Fixed & b ) {
	if (a > b)
		return a;
	return b;
}

const Fixed & Fixed::min( Fixed const & a, Fixed const & b ) {
	if (a > b)
		return b;
	return a;
}

const Fixed & Fixed::max( Fixed const & a, Fixed const & b ) {
	if (a > b)
		return a;
	return b;
}

const int Fixed::_fractionalBit = 8;
