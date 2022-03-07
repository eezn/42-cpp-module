/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 02:12:23 by jin-lee           #+#    #+#             */
/*   Updated: 2022/03/07 12:46:23 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main( void ) {

	int *a = new int();

	std::cout << a[0] << std::endl;
	std::cout << a[1] << std::endl;
	std::cout << a[100] << std::endl;

	Array<int> arr();

	return (0);
}
