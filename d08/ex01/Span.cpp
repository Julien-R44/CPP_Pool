/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/12 02:56:01 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/12 04:10:01 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( unsigned int n ): _maxSize(n) {
	return ;
}

Span::Span( Span const & src ): _maxSize(0) {
	*this = src;
	return;
}

Span::~Span( void ) {
	return;
}

Span &	Span::operator=( Span const & src ) {
	return *this;
}

void		Span::addNumber(int n) throw(CantAddMoreException) {
	if (_deque.size() + 1 > _maxSize)
		throw CantAddMoreException();
	_deque.push_front(n);
}

int			Span::shortestSpan(void) throw(NoNumberStored, OnlyOneStored) {
	int span = 0;

	std::deque<int>::iterator it = _deque.begin();
	for (it; it != _deque.end(); ++it) {
		if (std::distance())
	}
	return (span);
}

int			Span::longestSpan(void) throw(NoNumberStored, OnlyOneStored) {
	int span = 0;


	return (span);
}

