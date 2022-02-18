/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 10:01:42 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/18 12:08:33 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( void ) {}

Weapon::Weapon( std::string weapon_type )
: weapon_type(weapon_type) {}

Weapon::~Weapon( void ) {}

std::string Weapon::getType( void ) {
	
	return (this->weapon_type);
}

void Weapon::setType( std::string weapon_type ) {
	
	this->weapon_type = weapon_type;
}
