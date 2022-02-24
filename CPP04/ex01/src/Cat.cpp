/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:25:14 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/24 20:11:25 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* ************************************************************************** */
// Assignment operator

Cat &Cat::operator=( const Cat &cRef ) {

	this->type = cRef.getType();
	this->brain = new Brain(*(cRef.getBrain()));
	return (*this);
}

/* ************************************************************************** */
// Constructor and Destructor

Cat::Cat( void ) {

	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat( const Cat &cRef ) { *this = cRef; }

Cat::~Cat( void ) { delete this->brain; }

/* ************************************************************************** */
// Public Member Functions

void Cat::makeSound( void ) const {

	std::cout << GREEN << "Yaong.. yaoong..." << EOC << std::endl;
}

Brain *Cat::getBrain( void ) const { return (this->brain); }
