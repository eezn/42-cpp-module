/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 10:35:37 by jin-lee           #+#    #+#             */
/*   Updated: 2022/03/05 13:13:16 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/* ************************************************************************** */
// Constructor and Destructor

Cure::Cure( void ) : AMateria("cure") {}

Cure::Cure( const Cure &Ref ) {*this = Ref; }

Cure::~Cure( void ) {}

/* ************************************************************************** */
// Assignment operator

Cure &Cure::operator=( const Cure &Ref ) {

	this->AMateria::operator=(Ref);
	return (*this);
}

/* ************************************************************************** */
// Public Member Functions

// 업캐스팅된 Cure class 포인터를 반환
AMateria *Cure::clone( void ) const { return (new Cure(*this)); }

void Cure::use( ICharacter &target ) {

	std::cout << GREEN
	<< "* heals " << target.getName() << "’s wounds *"
	<< EOC << std::endl;
}
