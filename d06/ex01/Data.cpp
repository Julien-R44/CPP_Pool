/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/11 19:56:13 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/11 19:58:00 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data* deserialize(void *raw) {
	return reinterpret_cast<Data*>(raw);
}

std::string randomStr(void) {
	std::string str;
	for (int i = 0; i < 8; ++i){
		char c = static_cast<char>(rand() % 100 + 32);
		str += c;
	}
	return str;
}

void* serialize(void) {
	Data* s = new Data();
	s->s1 = randomStr();
	s->s2 = randomStr();
	s->n = rand();
	return s;
}
