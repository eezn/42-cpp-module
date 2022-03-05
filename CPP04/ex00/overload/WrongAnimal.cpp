/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:02:12 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/24 15:02:12 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/* ************************************************************************** */
// Constructor and Destructor

WrongAnimal::WrongAnimal( void ) { 

	std::cout << PURPLE << "WrongAnimal::" << EOC;
	std::cout << "Constructor called" << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal( const WrongAnimal &waRef ) {

	std::cout << PURPLE << "WrongAnimal::" << EOC;
	std::cout << "Copy constructor called" << std::endl;
	*this = waRef;
}

WrongAnimal::~WrongAnimal( void ) {

	std::cout << PURPLE << "WrongAnimal::" << EOC;
	std::cout << "WrongAnimal::Destructor called" << std::endl;
}

/* ************************************************************************** */
// Assignment operator

WrongAnimal &WrongAnimal::operator=( const WrongAnimal &waRef ) {

	std::cout << PURPLE << "WrongAnimal::" << EOC;
	std::cout << "Assignation operator called" << std::endl;
	this->type = waRef.getType();
	return (*this);
}

/* ************************************************************************** */
// Public Member Functions

std::string WrongAnimal::getType( void ) const { return (this->type); }

void WrongAnimal::makeSound( void ) const {

	std::cout << RED
	<< "Animal!! mal!! mal!!"
	<< EOC << std::endl;
}
