/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:45:05 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/24 12:43:41 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main( void ) {

	DiamondTrap a("jin-lee");

	a.whoAmI();
	a.printStatus();
	
	a.attack("someone");
	a.takeDamage(30);
	a.guardGate();
	a.beRepaired(70);
	a.highFivesGuys();
}
