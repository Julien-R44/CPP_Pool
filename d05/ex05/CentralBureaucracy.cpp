/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/10 03:37:09 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/10 17:45:14 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CentralBureaucracy.hpp"
#include <stdlib.h>

CentralBureaucracy::CentralBureaucracy( void ) {
	for (int i = 0; i < MAX_QUEUE; i++) { _queue[i] = NULL; }
	return ;
}

CentralBureaucracy::CentralBureaucracy( CentralBureaucracy const & src ) {
	*this = src;
	return;
}

CentralBureaucracy::~CentralBureaucracy( void ) {
	for (int i = 0; i < MAX_QUEUE; i++) { delete _queue[i]; }
	return;
}

CentralBureaucracy &	CentralBureaucracy::operator=( CentralBureaucracy const & src ) {
	(void)src;
	return *this;
}

void			CentralBureaucracy::feedOffice(Bureaucrat & bureaucrat, int index) {
	if ((rand() % 2) == 0)
		_offices[index].setSigner(bureaucrat);
	else
		_offices[index].setExecutor(bureaucrat);
	_offices[index].setIntern(*new Intern());
}

void			CentralBureaucracy::queueUp(std::string action) {
	int i = 0;
	while (_queue[i]) i++;
	_queue[i] = new std::string(action);
}

void			CentralBureaucracy::doBureaucracy(void) {
	int i = 0;
	while (i < 20) {
		try {
			_offices[i].doBureaucracy((_queue[i] == NULL ? "" : *_queue[i]), "Johny");
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}

		i++;
	}

}
