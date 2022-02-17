/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 06:15:43 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/18 06:38:05 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main( void ) {

	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Address in memory of the string\t\t\t: " << &str << std::endl;
	std::cout << "Address of the string by using stringPTR\t: " << stringPTR << std::endl;
	std::cout << "Address of the string by using stringREF\t: " << &stringREF << std::endl;
	std::cout << "String using the poiner\t\t: " << *stringPTR << std::endl;
	std::cout << "String using the reference\t: " << stringREF << std::endl;
}
