/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:19:37 by jin-lee           #+#    #+#             */
/*   Updated: 2022/03/02 00:57:21 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int main ( int argc, char **argv ) {

	if (argc == 2)
		std::cout << Conversion(argv[1]) << std::endl;
	else
		std::cout << "Usage: ./Conversion decimal_number" << std::endl;

	return (0);
}
