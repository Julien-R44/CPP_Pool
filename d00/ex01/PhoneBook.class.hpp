/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/07 06:00:35 by y0ja              #+#    #+#             */
/*   Updated: 2015/07/07 06:51:42 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "Contact.class.hpp"

# define MAX_CONTACTS	8

class PhoneBook {

public:
	PhoneBook( void );
	~PhoneBook( void );

	bool		addContact( void );
	void		search( void ) const;

private:
	Contact		_contacts[MAX_CONTACTS];

};


#endif
