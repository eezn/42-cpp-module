/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 03:10:44 by jin-lee           #+#    #+#             */
/*   Updated: 2022/03/01 13:10:00 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/* ************************************************************************** */
// Constructor and Destructor

RobotomyRequestForm::RobotomyRequestForm( void ) : Form() {}

RobotomyRequestForm::RobotomyRequestForm( const std::string &target )
: Form("RobotomyRequestForm", 72, 45) { setTarget(target); }

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &Ref )
: Form(Ref) {}

RobotomyRequestForm::~RobotomyRequestForm( void ) {}

/* ************************************************************************** */
// Assignment operator

RobotomyRequestForm
	&RobotomyRequestForm::operator=( const RobotomyRequestForm &Ref )
{
	this->Form::operator=(Ref);
	return (*this);
}

/* ************************************************************************** */
// Public Member Functions

void RobotomyRequestForm::execute( const Bureaucrat &executer ) const {
	
	executable(executer);
	std::srand((unsigned int)std::time(NULL));
	std::cout << "(Roughly, Rough sound..)" << std::endl;
	if (std::rand() % 2) {
		std::cout << getTarget() + " has been robotomized successfully."
		<< std::endl;
	}
	else {
		std::cout << getTarget() + " failed to be robotomiezed."
		<< std::endl;
	}
}

