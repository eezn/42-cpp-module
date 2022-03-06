/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 02:06:11 by jin-lee           #+#    #+#             */
/*   Updated: 2022/03/06 15:34:07 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Data.hpp>

/* ************************************************************************** */
// Constructor and Destructor

Data::Data( void ) {}
Data::Data( const int &num, const std::string &str ): num(num), str(str) {}
Data::Data( const Data &Ref ) { *this = Ref; }
Data::~Data( void ) {}

/* ************************************************************************** */
// Assignment operator

Data &Data::operator=( const Data &Ref ) {

	this->num = Ref.getNum();
	this->str = Ref.getStr();
	return (*this);
}

/* ************************************************************************** */
// Public Member Functions

int	Data::getNum( void ) const { return (this->num); }
std::string Data::getStr( void ) const { return (this->str); }

/* ************************************************************************** */

uintptr_t serialize( Data *ptr ) {
	
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize( uintptr_t raw ) {

	return (reinterpret_cast<Data*>(raw));
}
