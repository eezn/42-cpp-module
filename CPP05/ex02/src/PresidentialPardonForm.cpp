/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 03:12:18 by jin-lee           #+#    #+#             */
/*   Updated: 2022/03/01 05:38:16 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/* ************************************************************************** */
// Constructor and Destructor

PresidentialPardonForm::PresidentialPardonForm( void ) : Form() {}

PresidentialPardonForm::PresidentialPardonForm( const std::string &target )
: Form("PresidentialPardonForm", 25, 5) { setTarget(target); }

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &Ref )
: Form(Ref) {}

PresidentialPardonForm::~PresidentialPardonForm( void ) {}

/* ************************************************************************** */
// Assignment operator

PresidentialPardonForm
	&PresidentialPardonForm::operator=( const PresidentialPardonForm &Ref )
{
	this->Form::operator=(Ref);
	return (*this);
}

/* ************************************************************************** */
// Public Member Functions

void PresidentialPardonForm::execute( const Bureaucrat &executer ) const {
	
	executable(executer);
	std::cout << getTarget() + " has been pardoned by Zafod Beeblebrox."
	<< std::endl;
}
