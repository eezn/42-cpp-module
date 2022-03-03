/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:06:57 by jin-lee           #+#    #+#             */
/*   Updated: 2022/03/04 01:20:15 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* ************************************************************************** */
// Constructor and Destructor

Fixed::Fixed( void ) { this->value = 0; }

Fixed::Fixed( const Fixed &fRef ) { *this = fRef; }

Fixed::Fixed( const int value ) { this->value = value << this->fractionalBits; }

Fixed::Fixed( const float value ) {
	this->value = (int)std::roundf(value * (1 << this->fractionalBits));
}

Fixed::~Fixed( void ) {}

/* ************************************************************************** */
// Public Member Functions

int Fixed::getRawBits( void ) const { return (this->value); }

void Fixed::setRawBits( int const raw ) { this->value = raw; }

int Fixed::toInt( void ) const {
	return (this->value >> this->fractionalBits);
}

float Fixed::toFloat( void ) const {
	return ((float)this->value / (1 << this->fractionalBits));
}

/* ************************************************************************** */
// Class Functions (Static)

Fixed &Fixed::min( Fixed &a, Fixed &b ) {

	if (a.value < b.value)
		return (a);
	return (b);
}

Fixed &Fixed::max( Fixed &a, Fixed &b ) {

	if (a.value < b.value)
		return (b);
	return (a);
}

const Fixed &Fixed::min( const Fixed &a, const Fixed &b ) {

	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

const Fixed &Fixed::max( const Fixed &a, const Fixed &b ) {

	if (a.getRawBits() < b.getRawBits())
		return (b);
	return (a);
}

/* ************************************************************************** */
// Assignment operator

Fixed	&Fixed::operator=( const Fixed &b ) {

	this->value = b.getRawBits();
	return (*this);
}

/* ************************************************************************** */
// Comparison operators (Logical operators)

bool Fixed::operator<( const Fixed &b ) {

	if (this->value < b.value)
		return (true);
	return (false);
}

bool Fixed::operator>( const Fixed &b ) {

	if (this->value > b.value)
		return (true);
	return (false);
}

bool Fixed::operator<=( const Fixed &b ) {

	if (this->value <= b.value)
		return (true);
	return (false);
}

bool Fixed::operator>=( const Fixed &b ) {

	if (this->value >= b.value)
		return (true);
	return (false);
}

bool Fixed::operator==( const Fixed &b ) {

	if (this->value == b.value)
		return (true);
	return (false);
}

bool Fixed::operator!=( const Fixed &b ) {

	if (this->value != b.value)
		return (true);
	return (false);
}

/* ************************************************************************** */
// Arithmetic operators

Fixed Fixed::operator+( const Fixed &b ) {

	Fixed ret;

	ret.setRawBits(this->value + b.value);
	return (ret);
}

Fixed Fixed::operator-( const Fixed &b ) {

	Fixed ret;

	ret.setRawBits(this->value - b.value);
	return (ret);
}

Fixed Fixed::operator*( const Fixed &b ) {

	Fixed ret;
	
	ret.setRawBits((this->value * b.value) >> this->fractionalBits);
	return (ret);
}

Fixed Fixed::operator/( const Fixed &b ) {

	Fixed ret;

	ret.setRawBits((this->value / b.value) << this->fractionalBits);
	return (ret);
}

/* ************************************************************************** */
// Increment and Decrement operator

// ++a : pre-increment
Fixed &Fixed::operator++( void ) {

	this->value++;
	return (*this);
}

// --a : pre-decrement
Fixed &Fixed::operator--( void ) {

	this->value--;
	return (*this);
}

// a++ : post-increment
Fixed Fixed::operator++( int ) {

	Fixed temp(*this);

	this->value++;
	return (temp);
}

// a-- : post-decrement
Fixed Fixed::operator--( int ) {

	Fixed temp(*this);

	this->value--;
	return (temp);
}

/* ************************************************************************** */

std::ostream &operator<<( std::ostream &out, const Fixed &fRef ) {

	out << fRef.toFloat();
	return (out);
}
