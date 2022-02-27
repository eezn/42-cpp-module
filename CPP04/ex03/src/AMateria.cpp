/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 10:35:33 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/25 22:45:27 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/* ************************************************************************** */
// Constructor and Destructor

AMateria::AMateria( void ) {}

AMateria::AMateria( const std::string &type ) { this->type = type; }

AMateria::AMateria( const AMateria &Ref ) { *this = Ref; }

AMateria::~AMateria( void ) {}

/* ************************************************************************** */
// Assignment operator

AMateria &AMateria::operator=( const AMateria &Ref ) {
	
	this->type = Ref.getType();
	return (*this);
}

/* ************************************************************************** */
// Public Member Functions

std::string const &AMateria::getType( void ) const { return (this->type); }

AMateria *AMateria::clone( void ) const {
	return (NULL);
}

void AMateria::use( ICharacter &target ) {
	target.getName();
}
