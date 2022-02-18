/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 12:57:47 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/18 18:42:50 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main( int argc, char **argv ) {

	if (argc != 4) {
		std::cout << YELLOW << "Usage: ./replace filepath str1 str2"
		<< EOC << std::endl;
	}
	else {
		Replace	rp(argv);
		rp.myReplace();
	}

	return (0);
}
