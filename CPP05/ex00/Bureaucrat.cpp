/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 17:55:14 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/28 00:28:30 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/* ************************************************************************** */
// Constructor and Destructor

Bureaucrat::Bureaucrat( void ) : name("") {}

Bureaucrat::Bureaucrat( const std::string &name, const int &grade )
: name(name) {

	if (grade < HIGH)
		throw Bureaucrat::GradeTooHighException();
	if (grade > LOW)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat &Ref )
: name(Ref.getName()) { this->grade = Ref.getGrade(); }

Bureaucrat::~Bureaucrat( void ) {}

/* ************************************************************************** */
// Assignment operator

Bureaucrat &Bureaucrat::operator=( const Bureaucrat &Ref ) {

	*(const_cast<std::string*>(&(this->name))) = Ref.getName();
	this->grade = Ref.getGrade();
	return (*this);
}

/* ************************************************************************** */
// Public Member Functions

std::string Bureaucrat::getName( void ) const { return (this->name); }

int Bureaucrat::getGrade( void ) const { return (this->grade); }

void Bureaucrat::increaseGrade( const unsigned int &amount ) {

	if (this->grade - amount < HIGH)
		throw Bureaucrat::GradeTooHighException();
	if (this->grade - amount > LOW)
		throw Bureaucrat::GradeTooLowException();
	this->grade -= amount;
}

void Bureaucrat::decreaseGrade( const unsigned int &amount ) {

	if (this->grade + amount < HIGH)
		throw Bureaucrat::GradeTooHighException();
	if (this->grade + amount > LOW)
		throw Bureaucrat::GradeTooLowException();
	this->grade += amount;
}

/* ************************************************************************** */
// I/O operator

std::ostream &operator<<( std::ostream &out, const Bureaucrat &Ref ) {

	out << Ref.getName() << ", bureaucrat grade " << Ref.getGrade();
	return (out);
}
