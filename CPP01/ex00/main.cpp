/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:31:58 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/17 17:00:46 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	std::cout << GREEN;
	{
		Zombie A = Zombie("Stack Zombie A");
		A.announce();
	}
	std::cout << EOC;

	std::cout << YELLOW;
	{
		Zombie *C = newZombie("Heap Zombie C");
		C->announce();
		delete C;
	}
	std::cout << EOC;

	std::cout << BLUE;
	{
		randomChump("Stack Zombie B");
	}
	std::cout << EOC;
	return (0);
}
