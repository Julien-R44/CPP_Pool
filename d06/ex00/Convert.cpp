/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/10 18:11:23 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/11 04:40:52 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <cstdlib>
#include <string>

Convert::Convert( std::string const & name ):
	_av(name)
{
	_val = std::atof(name.c_str());
	return ;
}

Convert::Convert( Convert const & src ) {
	*this = src;
	return;
}

Convert::~Convert( void ) {
	return;
}

Convert::operator char(void) const throw(NotDisplayable)
{
	char n = static_cast<char>(_val);
	if (std::isprint(n) == 0)
		throw NotDisplayable();
	return n;
}

Convert::operator int(void) const throw(BadCastBruh)
{
	int n = static_cast<int>(_val);
	return n;
}

Convert::operator float(void) const throw(BadCastBruh)
{
	float n = static_cast<float>(_val);
	return n;
}


Convert::operator double(void) const throw(BadCastBruh)
{
	double n = static_cast<double>(_val);
	return n;
}

Convert &	Convert::operator=( Convert const & src ) {
	this->_av = src._av;
	return *this;
}

const char		*Convert::BadCastBruh::what() const throw() {
	return "Convert::BadCastBruh";
}
const char		*Convert::NotDisplayable::what() const throw() {
	return "Convert::NotDisplayable";
}
