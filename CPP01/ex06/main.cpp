/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 17:42:49 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/19 19:08:23 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main ( int argc, char **argv ) {

	Karen karen;

	if (argc != 2)
		return (0);
	karen.complain((std::string)argv[1]);

	return (0);
}