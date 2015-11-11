/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/11 19:56:13 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/11 19:58:23 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HEADER
# define DATA_HEADER

# include <iostream>
# include <sstream>
# include <cstdlib>
# include <ctime>

struct Data
{
	std::string	s1;
	int			n;
	std::string	s2;
};

Data* deserialize(void * raw);
void* serialize(void);

#endif
