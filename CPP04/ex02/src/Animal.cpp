/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 13:59:05 by jin-lee           #+#    #+#             */
/*   Updated: 2022/03/05 12:17:40 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/* ************************************************************************** */
// Constructor and Destructor

Animal::Animal( void ) {

	std::cout << CYAN << "Animal::" << EOC;
	std::cout << "Constructor called" << std::endl;
	this->type = "Animal";
}

Animal::Animal( const Animal &aRef ) {

	std::cout << CYAN << "Animal::" << EOC;
	std::cout << "Copy constructor called" << std::endl;
	*this = aRef;
}

Animal::~Animal( void ) {

	std::cout << CYAN << "Animal::" << EOC;
	std::cout << "Animal::Destructor called" << std::endl;
}

/* ************************************************************************** */
// Assignment operator

Animal &Animal::operator=( const Animal &aRef ) {

	this->type = aRef.getType();
	return (*this);
}

/* ************************************************************************** */
// Public Member Functions

std::string Animal::getType( void ) const { return (this->type); }
