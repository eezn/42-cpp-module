/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 15:57:53 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/18 05:20:40 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) {}

Zombie::Zombie( std::string name ) {

	this->name = name;
}

Zombie::~Zombie( void ) {

	std::cout
	<< this->name
	<< " is dead."
	<< std::endl;
}

void Zombie::announce( void ) {

	std::cout
	<< this->name
	<< ": BraiiiiiiinnnzzzZ..."
	<< std::endl;
}
