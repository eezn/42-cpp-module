/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:31:58 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/18 05:19:52 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void ) {

	std::cout << GREEN;
	{
		Zombie A = Zombie("Stack Zombie A");
		A.announce();
	}
	std::cout << EOC;

	std::cout << YELLOW;
	{
		Zombie *B = newZombie("Heap Zombie B");
		B->announce();
		delete B;
	}
	std::cout << EOC;

	std::cout << BLUE;
	{
		randomChump("Stack Zombie C");
	}
	std::cout << EOC;
	
	return (0);
}
