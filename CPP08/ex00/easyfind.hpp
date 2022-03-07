/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 23:03:22 by jin-lee           #+#    #+#             */
/*   Updated: 2022/03/08 01:30:00 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iterator>
#include <exception>
#include <iostream>

#define BLACK "\e[0;30m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[0;33m"
#define BLUE "\e[0;34m"
#define PURPLE "\e[0;35m"
#define CYAN "\e[0;36m"
#define LIGHTGRAY "\e[0;37m"
#define EOC "\e[0m"

template <typename T>
typename T::iterator easyfind( T &container, int to_find ) {
	typename T::iterator it = std::find(container.begin(), container.end(), to_find);
	if (it == container.end())
		throw OutofRangeException();
	return (it);
};

class OutofRangeException : public std::exception {
public:
	const char *what() const throw() {
		return ("Out of range");
	}
};

#endif