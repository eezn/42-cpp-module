/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 03:53:31 by jin-lee           #+#    #+#             */
/*   Updated: 2022/03/01 14:24:41 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main( void ) {

	Bureaucrat admin("admin", 1);
	Intern intern;

	Form *form_ptr1 = intern.makeForm("ShrubberyCreationForm", "garden");
	Form *form_ptr2 = intern.makeForm("RobotomyRequestForm", "Human");
	Form *form_ptr3 = intern.makeForm("PresidentialPardonForm", "Criminal");
	Form *form_ptr4 = intern.makeForm("DoesNotExistForm", "Target");

	std::cout << std::endl;

	admin.signForm(*form_ptr1);
	admin.signForm(*form_ptr2);
	admin.signForm(*form_ptr3);

	std::cout << std::endl;

	admin.executeForm(*form_ptr1);
	admin.executeForm(*form_ptr2);
	admin.executeForm(*form_ptr3);

	delete form_ptr1;
	delete form_ptr2;
	delete form_ptr3;
	delete form_ptr4;

	std::cout << std::endl;

	system("leaks Intern");
	
	return (0);
}
