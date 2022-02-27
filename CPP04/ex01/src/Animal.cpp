/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 13:59:05 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/24 20:09:47 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/* ************************************************************************** */
// Assignment operator

Animal &Animal::operator=( const Animal &aRef ) {

	this->type = aRef.getType();
	return (*this);
}

/* ************************************************************************** */
// Constructor and Destructor

Animal::Animal( void ) { this->type = "_"; }

Animal::Animal( const Animal &aRef ) { *this = aRef; }

Animal::~Animal( void ) {}

/* ************************************************************************** */
// Public Member Functions

std::string Animal::getType( void ) const { return (this->type); }
void Animal::makeSound( void ) const {}
