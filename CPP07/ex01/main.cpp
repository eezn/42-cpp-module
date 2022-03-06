/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 01:40:11 by jin-lee           #+#    #+#             */
/*   Updated: 2022/03/07 02:09:17 by jin-lee          ###   ########.fr       */
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

	iter(cpp_module, 6, print);
	iter(digit, 10, print);

	return (0);
}
