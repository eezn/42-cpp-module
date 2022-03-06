/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:19:37 by jin-lee           #+#    #+#             */
/*   Updated: 2022/03/06 18:30:13 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int main ( int argc, char **argv ) {

	if (argc == 2) {
		try { std::cout << Conversion(argv[1]) << std::endl; }
		catch (std::out_of_range) {
			std::cout << "Input: out of range" << std::endl;
		}
	}
	else
		std::cout << "Usage: ./Conversion decimal_number" << std::endl;

	return (0);
}
