/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:20:19 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/24 19:55:13 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* ************************************************************************** */
// Assignment operator

Dog &Dog::operator=( const Dog &dRef ) {

	std::cout << CYAN << "Dog::" << EOC;
	std::cout << "Assignation operator called" << std::endl;
	this->type = dRef.getType();
	this->brain = new Brain(*(dRef.getBrain()));
	return (*this);
}

/* ************************************************************************** */
// Constructor and Destructor

Dog::Dog( void ) {

	std::cout << CYAN << "Dog::" << EOC;
	std::cout << "Constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog( const Dog &dRef ) {

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
// Public Member Functions

void Dog::makeSound( void ) const {

	std::cout << GREEN << "Wang!! Wang!!!" << EOC << std::endl;
}

Brain *Dog::getBrain( void ) const { return (this->brain); }
