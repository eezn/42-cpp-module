/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:06:57 by jin-lee           #+#    #+#             */
/*   Updated: 2022/03/04 01:24:09 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) {

	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed( const Fixed &fRef ) {

	std::cout << "Copy constructor called" << std::endl;
	*this = fRef;
}

Fixed::~Fixed( void ) {

	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const {

	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits( int const raw ) {

	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

Fixed	&Fixed::operator=( const Fixed &fRef ) {
	
	std::cout << "Assignation operator called" << std::endl;
	this->value = fRef.getRawBits();
	return (*this);
}
