/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 22:28:09 by jin-lee           #+#    #+#             */
/*   Updated: 2022/03/01 05:16:03 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/* ************************************************************************** */
// Constructor and Destructor

Form::Form( void )
: target("none"), name("none"), is_signed(false), sign_grade(0), exec_grade(0) {}

Form::Form( const std::string &name, const int &sign_grade, const int &exec_grade )
: target("none"), name(name), is_signed(false),
	sign_grade(sign_grade), exec_grade(exec_grade) {

	if (sign_grade < HIGH || exec_grade < HIGH)
		throw Form::GradeTooHighException();
	if (sign_grade > LOW || exec_grade > LOW)
		throw Form::GradeTooLowException();
}

Form::Form( const Form &Ref )
: target(Ref.getTarget()), name(Ref.getName()), is_signed(Ref.getIsSigned()),
	sign_grade(Ref.getSignGrade()), exec_grade(Ref.getExecGrade()) {}

Form::~Form( void ) {}

/* ************************************************************************** */
// Assignment operator

Form &Form::operator=( const Form &Ref ) {

	*(const_cast<std::string*>(&(this->target))) = Ref.getTarget();
	*(const_cast<std::string*>(&(this->name))) = Ref.getName();
	this->is_signed = Ref.getIsSigned();
	*(const_cast<int*>(&(this->sign_grade))) = Ref.getSignGrade();
	*(const_cast<int*>(&(this->exec_grade))) = Ref.getExecGrade();
	return (*this);
}

/* ************************************************************************** */
// Public Member Functions

void Form::setTarget( const std::string &target ) {
	*(const_cast<std::string*>(&(this->target))) = target;
}

std::string Form::getTarget( void ) const { return (this->target); }

std::string Form::getName( void ) const { return (this->name); }

bool Form::getIsSigned( void ) const { return (this->is_signed); }

int Form::getSignGrade( void ) const { return (this->sign_grade); }

int Form::getExecGrade( void ) const { return (this->exec_grade); }

void Form::beSigned( const Bureaucrat &Ref ) {

	if (Ref.getGrade() <= this->sign_grade) { this->is_signed = true; }
	else { throw Form::GradeTooLowException(); } 
}

void Form::executable( const Bureaucrat &executer ) const {

	if (!is_signed)
		throw FalseSignException();
	if (executer.getGrade() > exec_grade)
		throw GradeTooLowException();
}

/* ************************************************************************** */
// I/O operator

std::ostream &operator<<( std::ostream &out, const Form &Ref ) {
	
	out << "- " << CYAN << Ref.getName() << EOC << " info" << std::endl
		<< " target    : " << CYAN << Ref.getTarget() << EOC << std::endl
		<< " sign_grade: " << CYAN << Ref.getSignGrade() << EOC << std::endl
		<< " exec_grade: " << CYAN << Ref.getExecGrade() << EOC << std::endl
		<< " is signed?: " << CYAN << std::boolalpha << Ref.getIsSigned() << EOC;
	return (out);
}
