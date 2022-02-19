/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 01:28:31 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/18 05:20:53 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void ) {
	
	Zombie *Horde = zombieHorde(3, "Zombie");

	for (int i = 0; i < 3; i++)
		Horde[i].announce();
	delete[] Horde;

	return (0);
}
