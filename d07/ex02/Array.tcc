/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/12 00:14:52 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/12 00:42:08 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
class Array {

public:
	class BadIndexException : public std::exception {
		public:
		virtual const char *what(void) throw() { return "Array::BadIndexException"; }
	};

	Array( void ) { _size = 0; _array = NULL; }
	Array(unsigned int n): _size(n) 	{ _array = new T[_size]; }
	~Array(void) 						{	delete [] _array; }

	Array(Array const & src) {
		_size = src._size;
		_array = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = src._array[i];
	}

	Array &		operator=( Array const & src ) {
		_size = src._size;
		delete [] _array;
		_array = new T[_size];

		for (unsigned int i = 0; i < _size; i++ )
			_array[i] = src._array[i];
		return *this;
	}

	T & 		operator[](unsigned int i) throw(BadIndexException) {
		if ( i >= _size )
			throw BadIndexException();
		return _array[i];
	}

	unsigned int 	size(void) const 		{ return _size; }

private:

	size_t	_size;
	T		*_array;

};
