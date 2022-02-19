/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 10:08:32 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/18 12:32:11 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon )
: a_name(name), a_weapon(weapon) {

	std::cout << GREEN << "Generator HumanA: ";
	std::cout << this->a_name << " got a ";
	std::cout << this->a_weapon.getType()
	<< EOC << std::endl;
}

HumanA::~HumanA( void ) {}


void HumanA::attack( void ) {

	std::cout
	<< this->a_name
	<< " attacks with his "
	<< this->a_weapon.getType()
	<< std::endl;
}
