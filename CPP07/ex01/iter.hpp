/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 01:40:05 by jin-lee           #+#    #+#             */
/*   Updated: 2022/03/07 02:08:26 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter( T *arr, const size_t &len, void (*func)(const T &)) {
	for (size_t i = 0; i < len; i++) { func(arr[i]); }
	std::cout << std::endl;
}

template <typename T>
void print( const T &elem ) { std::cout << elem << " "; }

#endif