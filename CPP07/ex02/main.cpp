/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 02:12:23 by jin-lee           #+#    #+#             */
/*   Updated: 2022/03/07 18:19:24 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main( void ) {

	// int *a = new int();

	// std::cout << a[0] << std::endl;
	// std::cout << a[1] << std::endl;
	// std::cout << a[100] << std::endl;

	{	// Int Array Test
		std::cout << GREEN;

		Array<int> arr1(10);

		std::cout << "- arr1" << std::endl;
		std::cout << arr1.getArr() << std::endl;
		std::cout << arr1.size() << std::endl;
		for (int i = 0; i < 10; i++ ) {
			std::cout << arr1[i] << " ";
		}
		std::cout << std::endl;

		Array<int> arr2(arr1);
		for (int i = 0; i < 10; i++) { arr1[i] = i; }

		std::cout << "- arr1" << std::endl;
		std::cout << arr1.getArr() << std::endl;
		std::cout << arr1.size() << std::endl;
		for (int i = 0; i < 10; i++ ) {
			std::cout << arr1[i] << " ";
		}
		std::cout << std::endl;

		std::cout << "- arr2" << std::endl;
		std::cout << arr2.getArr() << std::endl;
		std::cout << arr2.size() << std::endl;
		for (int i = 0; i < 10; i++ ) {
			std::cout << arr2[i] << " ";
		}
		std::cout << std::endl;

		Array<int> arr3 = arr2;

		std::cout << "- arr3" << std::endl;
		std::cout << arr3.getArr() << std::endl;
		std::cout << arr3.size() << std::endl;
		for (int i = 0; i < 10; i++ ) {
			std::cout << arr3[i] << " ";
		}
		std::cout << std::endl;

		arr3 = arr1;

		std::cout << EOC;
	}

	{	// String Array Test
		std::cout << YELLOW;

		Array<std::string> arr1(5);

		std::cout << "- arr1" << std::endl;
		std::cout << arr1.getArr() << std::endl;
		std::cout << arr1.size() << std::endl;
		for (int i = 0; i < 5; i++ ) {
			std::cout << arr1[i] << " ";
		}
		std::cout << std::endl;

		arr1[0] = "abc";
		arr1[1] = "def";
		arr1[2] = "ghi";
		arr1[3] = "jkl";
		arr1[4] = "mno";

		for (int i = 0; i < 5; i++ ) {
			std::cout << arr1[i] << " ";
		}
		std::cout << std::endl;
		
		Array<std::string> arr2 = arr1;

		for (int i = 0; i < 5; i++ ) {
			std::cout << arr2[i] << " ";
		}
		std::cout << std::endl;

		try { std::cout << arr2[5] << std::endl; }
		catch(std::exception &e) { std::cout << e.what() << std::endl; }

		std::cout << EOC;
	}

	{	// Default Construction Test (size: 0)
		std::cout << RED;

		Array<char> ch;

		std::cout << ch.size() << std::endl;
		std::cout << ch.getArr() << std::endl;
		try { std::cout << ch[1] << std::endl; }
		catch(std::exception &e) { std::cout << e.what() << std::endl; }

		std::cout << EOC;
	}

	return (0);
}
