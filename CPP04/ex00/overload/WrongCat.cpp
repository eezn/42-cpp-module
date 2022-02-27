/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:04:29 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/24 15:04:36 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/* ************************************************************************** */
// Constructor and Destructor

WrongCat::WrongCat( void ) { 

	std::cout << PURPLE << "WrongCat::" << EOC;
	std::cout << "Constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat &wcRef ) {

	std::cout << PURPLE << "WrongCat::" << EOC;
	std::cout << "Copy constructor called" << std::endl;
	*this = wcRef;
}

WrongCat::~WrongCat( void ) {

	std::cout << PURPLE << "WrongCat::" << EOC;
	std::cout << "Destructor called" << std::endl;
}

/* ************************************************************************** */
// Assignment operator

WrongCat &WrongCat::operator=( const WrongCat &wcRef ) {

	std::cout << PURPLE << "WrongCat::" << EOC;
	std::cout << "Assignation operator called" << std::endl;
	this->type = wcRef.getType();
	return (*this);
}

/* ************************************************************************** */
// Public Member Functions

void WrongCat::makeSound( void ) const {

	std::cout << PURPLE << "Yaong.. yaoong..." << EOC << std::endl;
}
