/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/12 01:52:53 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/12 02:34:24 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
bool	easyfind(T &a, int b) {
	typename T::iterator it = a.begin();

	for ( it ; it != a.end(); ++it ) {
		if (*it == b)
			return true;
	}
	return false;
}
