/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 10:22:38 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/18 12:31:55 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main( void ) {

	{
		Weapon	gun = Weapon("M4A1");

		HumanA	bob("Bob", gun);
		bob.attack();
		gun.setType("AK47");
		bob.attack();
	}
	{
		Weapon	gun = Weapon("M4A1");

		HumanB	jim("Jim");
		jim.setWeapon(gun);
		jim.attack();
		gun.setType("AK47");
		jim.attack();
	}
}
