/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/12 02:56:01 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/12 03:25:19 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <deque>

class Span {

public:
	class CantAddMoreException : public std::exception {
		public:
		virtual const char *what() throw() { return "Span::CantAddMoreException"; }
	};
	class NoNumberStored : public std::exception {
		public:
		virtual const char *what() throw() { return "Span::NoNumberStored"; }
	};
	class OnlyOneStored : public std::exception {
		public:
		virtual const char *what() throw() { return "Span::OnlyOneStored"; }
	};
	Span( unsigned int n );
	Span(Span const & src);
	~Span();

	Span &		operator=( Span const & src );

	void		addNumber(int n) throw(CantAddMoreException);
	int			shortestSpan(void) throw(NoNumberStored, OnlyOneStored);
	int			longestSpan(void) throw(NoNumberStored, OnlyOneStored);

private:
	std::deque<int>		_deque;
	const unsigned int 	_maxSize;
};


#endif
