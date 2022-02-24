/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:20:19 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/24 15:22:25 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* ************************************************************************** */
// Constructor and Destructor

Dog::Dog( void ) { 

	std::cout << CYAN << "Dog::" << EOC;
	std::cout << "Constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog( const Dog &dRef ) {

	std::cout << CYAN << "Dog::" << EOC;
	std::cout << "Copy constructor called" << std::endl;
	*this = dRef;
}

Dog::~Dog( void ) {

	std::cout << CYAN << "Dog::" << EOC;
	std::cout << "Destructor called" << std::endl;
}

/* ************************************************************************** */
// Assignment operator

Dog &Dog::operator=( const Dog &dRef ) {

	std::cout << CYAN << "Dog::" << EOC;
	std::cout << "Assignation operator called" << std::endl;
	this->type = dRef.getType();
	return (*this);
}

/* ************************************************************************** */
// Public Member Functions

void Dog::makeSound( void ) const {

	std::cout << GREEN << "Wang!! Wang!!!" << EOC << std::endl;
}
