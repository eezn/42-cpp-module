/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 22:28:09 by jin-lee           #+#    #+#             */
/*   Updated: 2022/03/06 12:48:40 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/* ************************************************************************** */
// Constructor and Destructor

Form::Form( void )
: name(""),
	is_signed(false),
	sign_grade(0),
	exec_grade(0) {}

Form::Form( const std::string &name, const int &sign_grade, const int &exec_grade )
: name(name),
	is_signed(false),
	sign_grade(sign_grade),
	exec_grade(exec_grade) {

	if (sign_grade < HIGH || exec_grade < HIGH)
		throw Form::GradeTooHighException();
	if (sign_grade > LOW || exec_grade > LOW)
		throw Form::GradeTooLowException();
}

Form::Form( const Form &Ref )
: name(Ref.getName()),
	is_signed(Ref.getIsSigned()),
	sign_grade(Ref.getSignGrade()),
	exec_grade(Ref.getExecGrade()) {}

Form::~Form( void ) {}

/* ************************************************************************** */
// Assignment operator

Form &Form::operator=( const Form &Ref ) {

	// 상수성 제거, 캐스트 연산자
	*(const_cast<std::string*>(&(this->name))) = Ref.getName();
	this->is_signed = Ref.getIsSigned();
	*(const_cast<int*>(&(this->sign_grade))) = Ref.getSignGrade();
	*(const_cast<int*>(&(this->exec_grade))) = Ref.getExecGrade();
	return (*this);
}

void Form::beSigned( const Bureaucrat &Ref ) {

	if (Ref.getGrade() <= this->sign_grade) { this->is_signed = true; }
	else { throw Form::GradeTooLowException(); } 
}

/* ************************************************************************** */
// Public Member Functions

std::string Form::getName( void ) const { return (this->name); }

bool Form::getIsSigned( void ) const { return (this->is_signed); }

int Form::getSignGrade( void ) const { return (this->sign_grade); }

int Form::getExecGrade( void ) const { return (this->exec_grade); }

/* ************************************************************************** */
// I/O operator

std::ostream &operator<<( std::ostream &out, const Form &Ref ) {
	
	out << "- " << CYAN << Ref.getName() << EOC << " info" << std::endl
		<< " sign_grade: " << CYAN << Ref.getSignGrade() << EOC << std::endl
		<< " exec_grade: " << CYAN << Ref.getExecGrade() << EOC << std::endl
		<< " is signed?: " << CYAN << std::boolalpha << Ref.getIsSigned() << EOC;
	return (out);
}
