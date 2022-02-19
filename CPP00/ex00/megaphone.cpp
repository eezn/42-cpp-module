/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 06:00:27 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/18 05:11:40 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main( int argc, char **argv ) {
	char	*str;
	int		idx;

	idx = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		while (++idx < argc) {
			str = argv[idx];
			while (*str) {
				if (std::isalpha(*str) && std::islower(*str))
					std::cout << (char)std::toupper(*str);
				else
					std::cout << *str;
				str++;
			}
		}
	std::cout << std::endl;
	return (EXIT_SUCCESS);
}
