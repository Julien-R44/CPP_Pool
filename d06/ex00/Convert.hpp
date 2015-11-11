/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/10 18:11:25 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/11 04:39:50 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>

class Convert {

public:
	class BadCastBruh : public std::exception {
		public:
		virtual const char *what() const throw();
	};
	class NotDisplayable : public std::exception {
		public:
		virtual const char *what() const throw();
	};
	Convert( std::string const & name);
	Convert(Convert const & src);
	~Convert( void );

	Convert &		operator=( Convert const & src );

	operator char()	const throw(NotDisplayable);
	operator int() const throw(BadCastBruh);
	operator float() const throw(BadCastBruh);
	operator double() const throw(BadCastBruh);

private:
	std::string		_av;
	double			_val;
};

#endif
