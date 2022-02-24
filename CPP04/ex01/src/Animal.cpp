/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 13:59:05 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/24 19:15:37 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/* ************************************************************************** */
// Assignment operator

Animal &Animal::operator=( const Animal &aRef ) {

	std::cout << CYAN << "Animal::" << EOC;
	std::cout << "Assignation operator called" << std::endl;
	this->type = aRef.getType();
	return (*this);
}

/* ************************************************************************** */
// Constructor and Destructor

Animal::Animal( void ) { 

	std::cout << CYAN << "Animal::" << EOC;
	std::cout << "Constructor called" << std::endl;
	this->type = "_";
}

Animal::Animal( const Animal &aRef ) {

	std::cout << CYAN << "Animal::" << EOC;
	std::cout << "Copy constructor called" << std::endl;
	*this = aRef;
}

Animal::~Animal( void ) {

	std::cout << CYAN << "Animal::" << EOC;
	std::cout << "Destructor called" << std::endl;
}

/* ************************************************************************** */
// Public Member Functions

std::string Animal::getType( void ) const { return (this->type); }
void Animal::makeSound( void ) const {}
