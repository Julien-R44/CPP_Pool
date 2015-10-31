/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/07 06:32:25 by y0ja              #+#    #+#             */
/*   Updated: 2015/10/31 03:22:26 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

class Contact {

public:
	int enabled;

	Contact( void );
	~Contact( void );

	void	fillFields( void );
	void	displayFields( void ) const;
	void	displayAll( void ) const;

private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _login;
	std::string _postalAdress;
	std::string _email;
	std::string _phoneNumber;
	std::string _birthdayDate;
	std::string _favoriteMeal;
	std::string _underwearColor;
	std::string _darkestSecret;
	int			_index;

	std::string	_getInput( char *field ) const;
	void		_displayOneField( std::string str ) const;

	static int		_nbInstances;
};


#endif
