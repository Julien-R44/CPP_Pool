/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 22:41:41 by y0ja              #+#    #+#             */
/*   Updated: 2015/10/31 22:45:08 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string		str("HI THIS IS BRAIN");
	std::string		*strPtr = &str;
	std::string		&strRef = str;

	std::cout << *strPtr << std::endl;
	std::cout << strRef << std::endl;
	return 0;
}
