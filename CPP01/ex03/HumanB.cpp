/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 10:16:54 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/18 12:27:49 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name )
: b_name(name) {

	std::cout << YELLOW << "Generator HumanB: ";
	std::cout << this->b_name << " got nothing." 
	<< EOC << std::endl;
}

HumanB::~HumanB( void ) {}

// 맴버함수 매개변수의 &weapon은 참조자
// 멤버함수 내부의 &weapon은 참조자의 주소
void HumanB::setWeapon( Weapon &weapon ) {

	this->b_weapon = &weapon;
}

void HumanB::attack( void ) {

	std::cout
	<< this->b_name
	<< " attacks with his "
	<< (*(this->b_weapon)).getType()
	<< std::endl;
}
