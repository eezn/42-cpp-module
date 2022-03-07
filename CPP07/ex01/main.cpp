/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 01:40:11 by jin-lee           #+#    #+#             */
/*   Updated: 2022/03/07 18:45:04 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main ( void ) {

	const std::string cpp_module[6] = {
		"CPP", "Module", "07", "ex01", "Iterator", "!!"
	};

	const int digit[10] = {
		0, 1, 2, 3, 4, 5, 6, 7, 8, 9
	};

	Dummy dummy[5];

	dummy[0].setValue(1);
	dummy[1].setValue(2);
	dummy[2].setValue(3);
	dummy[3].setValue(4);
	dummy[4].setValue(5);

	iter(cpp_module, 6, print);
	iter(digit, 10, print);
	iter(dummy, 5, print);

	return (0);
}
