/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 23:03:07 by jin-lee           #+#    #+#             */
/*   Updated: 2022/03/08 01:28:39 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int main( void ) {

	{
		std::list<int> li;

		std::cout << GREEN << "List: ";
		for (int i = 0; i < 10; i++) { li.push_back(i * 2); }
		for (std::list<int>::iterator it = li.begin(); it != li.end(); it++) {
			std::cout << *it << " ";
		}
		std::cout << std::endl;
		
		try {
			std::cout << *easyfind(li, 10) << std::endl;
			std::cout << *easyfind(li, 18) << std::endl;
			std::cout << *easyfind(li, 20) << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::vector<int> vec(10);

		std::cout << YELLOW << "Vector: ";
		for (int i = 0; i < 10; i++) { vec[i] = (i * 3); }
		for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
			std::cout << *it << " ";
		}
		std::cout << std::endl;

		try {
			std::cout << *easyfind(vec, 15) << std::endl;
			std::cout << *easyfind(vec, 27) << std::endl;
			std::cout << *easyfind(vec, 30) << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << EOC;

	return (0);
}
