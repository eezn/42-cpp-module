/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 01:17:14 by jin-lee           #+#    #+#             */
/*   Updated: 2022/03/07 01:34:23 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap( T &a, T &b ) {

	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <typename T>
T &min( T &a, T &b ) {

	if (a < b)
		return (a);
	return (b);
}

template <typename T>
T &max( T &a, T &b ) {

	if (a < b)
		return (b);
	return (a);
}

#endif