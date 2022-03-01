/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 23:45:42 by jin-lee           #+#    #+#             */
/*   Updated: 2022/03/01 05:49:06 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/* ************************************************************************** */
// Constructor and Destructor

ShrubberyCreationForm::ShrubberyCreationForm( void ) : Form() {}

ShrubberyCreationForm::ShrubberyCreationForm( const std::string &target )
: Form("ShrubberyCreationForm", 145, 137) { setTarget(target); }

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &Ref )
: Form(Ref) {}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {}

/* ************************************************************************** */
// Assignment operator

ShrubberyCreationForm
	&ShrubberyCreationForm::operator=( const ShrubberyCreationForm &Ref )
{
	this->Form::operator=(Ref);
	return (*this);
}

/* ************************************************************************** */
// Public Member Functions

void ShrubberyCreationForm::execute( const Bureaucrat &executer ) const {
	
	executable(executer);
	std::ofstream out_file(getTarget() + "_shruberry");
	if (out_file.fail())
		throw ExecuteFailException();

	const std::string ascii_tree =
		"     ccee88oo\n"
		"  C8O8O8Q8PoOb o8oo\n"
		" dOB69QO8PdUOpugoO9bD\n"
		"CgggbU8OU qOp qOdoUOdcb\n"
		"    6OuU  /p u gcoUodpP\n"
		"      \\//  /douUP\n"
		"        \\////\n"
		"         |||/\n"
		"         ||||\n"
		"         |||||\n"
		"   .....//||||....";
		
	out_file << ascii_tree;
	out_file.close();
}
