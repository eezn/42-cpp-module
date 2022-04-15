/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:20:19 by jin-lee           #+#    #+#             */
/*   Updated: 2022/04/15 17:01:31 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* ************************************************************************** */
// Constructor and Destructor

Dog::Dog( void ) {

	std::cout << CYAN << "Dog::" << EOC;
	std::cout << "Constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog( const Dog &dRef ) : brain(NULL) {

	std::cout << CYAN << "Dog::" << EOC;
	std::cout << "Copy constructor called" << std::endl;
	*this = dRef;
}

Dog::~Dog( void ) {

	std::cout << CYAN << "Dog::" << EOC;
	std::cout << "Destructor called" << std::endl;
	delete this->brain;
}

/* ************************************************************************** */
// Assignment operator

Dog &Dog::operator=( const Dog &dRef ) {

	this->type = dRef.getType();
	if (this->brain)
		delete this->brain;
	this->brain = new Brain(*(dRef.getBrain()));
	return (*this);
}

/* ************************************************************************** */
// Public Member Functions

void Dog::makeSound( void ) const {

	std::cout << GREEN << "Wang!! Wang!!!" << EOC << std::endl;
}

Brain *Dog::getBrain( void ) const { return (this->brain); }
