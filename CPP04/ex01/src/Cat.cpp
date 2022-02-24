/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:25:14 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/24 19:16:33 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* ************************************************************************** */
// Assignment operator

Cat &Cat::operator=( const Cat &cRef ) {

	std::cout << CYAN << "Cat::" << EOC;
	std::cout << "Assignation operator called" << std::endl;
	this->type = cRef.getType();
	this->brain = new Brain(*(cRef.getBrain()));
	return (*this);
}

/* ************************************************************************** */
// Constructor and Destructor

Cat::Cat( void ) {

	std::cout << CYAN << "Cat::" << EOC;
	std::cout << "Constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat( const Cat &cRef ) {

	std::cout << CYAN << "Cat::" << EOC;
	std::cout << "Copy constructor called" << std::endl;
	*this = cRef;
}

Cat::~Cat( void ) {

	std::cout << CYAN << "Cat::" << EOC;
	std::cout << "Destructor called" << std::endl;
	delete this->brain;
}

/* ************************************************************************** */
// Public Member Functions

void Cat::makeSound( void ) const {

	std::cout << GREEN << "Yaong.. yaoong..." << EOC << std::endl;
}

Brain *Cat::getBrain( void ) const { return (this->brain); }
