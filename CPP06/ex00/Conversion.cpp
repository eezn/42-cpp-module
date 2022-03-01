/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:08:21 by jin-lee           #+#    #+#             */
/*   Updated: 2022/03/02 00:55:06 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

/* ************************************************************************** */
// Constructor and Destructor

Conversion::Conversion( void )
: input(""), value(0.0) {}

Conversion::Conversion( const std::string &input )
: input(input), value(std::stod(input)) {}

Conversion::Conversion( const Conversion &Ref )
: input(Ref.getInput()), value(Ref.getValue()) {}

Conversion::~Conversion( void ) {}

/* ************************************************************************** */
// Assignment operator

Conversion &Conversion::operator=( const Conversion &Ref ) {

	*(const_cast<std::string*>(&(this->input))) = Ref.getInput();
	*(const_cast<double*>(&(this->value))) = Ref.getValue();
	return (*this);
}

/* ************************************************************************** */
// Public Member Functions

std::string	Conversion::getInput( void ) const { return (this->input); }
double Conversion::getValue( void ) const { return (this->value); }

char Conversion::toChar( void ) const {

	if (isnan(value) || isinf(value))
		throw ImpossibleException();

	const int int_value = static_cast<int>(value);

	if (!std::isprint(int_value)) {
		if ((0 <= int_value && int_value <= 31) || int_value == 127)
			throw NonDisplayableException();
		else
			throw ImpossibleException();
	}

	return (static_cast<char>(int_value));
}

int Conversion::toInt( void ) const {

	if (isnan(value) || isinf(value))
		throw ImpossibleException();
	if (value > static_cast<double>(INT32_MAX))
		throw OverFlowException();
	if (value < static_cast<double>(INT32_MIN))
		throw UnderFlowException();
	return (static_cast<int>(value));
}

float Conversion::toFloat( void ) const { return (static_cast<float>(value)); }

double Conversion::toDouble( void ) const { return (static_cast<double>(value)); }


/* ************************************************************************** */
// I/O operator

std::ostream &operator<<( std::ostream &out, const Conversion &Ref ) {

	out << "char: ";
	try { out << Ref.toChar() << std::endl; }
	catch (std::exception &e) { out << e.what() << std::endl; }
	
	out << "int: ";
	try { out << Ref.toInt() << std::endl; }
	catch (std::exception &e) { out << e.what() << std::endl; }

	if (isnan(Ref.getValue()) || isinf(Ref.getValue())) {
		out << "float: " << std::showpos << Ref.toFloat() << "f" << std::endl;
		out << "double: " << std::showpos << Ref.toFloat();
		return (out);
	}

	out << "float: ";
	if (Ref.toFloat() == static_cast<int64_t>(Ref.toFloat())) {
		out << Ref.toFloat() << ".0f" << std::endl;
	}
	else { out << Ref.toFloat() << "f" << std::endl; }

	out << "double: ";
	if (Ref.toDouble() == static_cast<int64_t>(Ref.toDouble())) {
		out << Ref.toDouble() << ".0";
	}
	else { out << Ref.toDouble(); }
	return (out);
}
