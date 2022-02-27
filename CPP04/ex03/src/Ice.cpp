/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 10:35:39 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/25 21:50:37 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/* ************************************************************************** */
// Constructor and Destructor

Ice::Ice( void ) : AMateria("ice") {}

Ice::Ice( const Ice &Ref ) { *this = Ref; }

Ice::~Ice( void ) {}

/* ************************************************************************** */
// Assignment operator

Ice &Ice::operator=( const Ice &Ref ) {

	this->AMateria::operator=(Ref);
	return (*this);
}

/* ************************************************************************** */
// Public Member Functions

// 업캐스팅된 Ice class 포인터를 반환
AMateria *Ice::clone( void ) const {
	return (new Ice(*this));
}

void Ice::use( ICharacter &target ) {

	std::cout << CYAN
	<< "* shoots an ice bolt at " << target.getName() << " *"
	<< EOC << std::endl;
}
