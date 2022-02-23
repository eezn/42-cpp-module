/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:06:57 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/23 16:26:32 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* ************************************************************************** */
// Constructor and Destructor

Fixed::Fixed( void ) {

	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed( const Fixed &fRef ) {

	std::cout << "Copy constructor called" << std::endl;
	*this = fRef;
}

Fixed::Fixed( const int value ) {

	std::cout << "Int constructor called" << std::endl;
	this->value = value << this->fractionalBits;
}

Fixed::Fixed( const float value ) {

	std::cout << "Float constructor called" << std::endl;
	this->value = (int)std::roundf(value * (1 << this->fractionalBits)); // float, double 은 shift 연산 불가능
}

Fixed::~Fixed( void ) {

	std::cout << "Destructor called" << std::endl;
}

/* ************************************************************************** */
// Public Member Functions

int Fixed::getRawBits( void ) const {

	return (this->value);
}

void Fixed::setRawBits( int const raw ) {

	this->value = raw;
}

int Fixed::toInt( void ) const {

	return (this->value >> this->fractionalBits);
}

float Fixed::toFloat( void ) const {

	return ((float)this->value / (1 << this->fractionalBits));
}

/* ************************************************************************** */
// Assignment operator

Fixed	&Fixed::operator=( const Fixed &fRef ) {
	
	std::cout << "Assignation operator called" << std::endl;
	this->value = fRef.getRawBits();
	return (*this);
}

/* ************************************************************************** */

std::ostream &operator<<( std::ostream &out, const Fixed &fRef ) {

	out << fRef.toFloat();
	return (out);
}
