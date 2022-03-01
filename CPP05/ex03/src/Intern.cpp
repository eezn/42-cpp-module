/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:31:49 by jin-lee           #+#    #+#             */
/*   Updated: 2022/03/01 14:14:06 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

/* ************************************************************************** */
// Constructor and Destructor

Intern::Intern( void ) {}

Intern::Intern( const Intern &Ref ) { (void)Ref; }

Intern::~Intern( void ) {}

/* ************************************************************************** */
// Assignment operator

Intern &Intern::operator=( const Intern &Ref ) {

	(void)Ref;
	return (*this);
}

/* ************************************************************************** */
// Public Member Functions

Form *Intern::makeForm( const std::string &form_name, const std::string &target ) {

	const std::string form_list[3] = {
		"ShrubberyCreationForm",
		"RobotomyRequestForm",
		"PresidentialPardonForm"};
	
	try
	{
		int i = -1;
		while (++i < 3) {
			if (form_name == form_list[i])
				break ;
		}
		if (i < 3) {
			std::cout << GREEN
				<< "Intern creates "
				<< "[" + form_name + "]"
				<< EOC << std::endl; 
		}
		switch (i) {
			case 0: return (new ShrubberyCreationForm(target));
			case 1: return (new RobotomyRequestForm(target));
			case 2: return (new PresidentialPardonForm(target));
			case 3: throw NoMatchFormException();
		}
	}
	catch (std::exception& e)
	{
		std::cout << YELLOW
			<< "Intern cannot create " << "[" + form_name + "]" << ". "
			<< e.what()
			<< EOC << std::endl;
	}
	return (NULL);
}