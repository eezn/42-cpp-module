/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 03:53:31 by jin-lee           #+#    #+#             */
/*   Updated: 2022/03/01 05:50:32 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main( void ) {

	Bureaucrat admin("Admin", 1);
	Bureaucrat guest1("guset1", 138);
	Bureaucrat guest2("guset2", 46);
	Bureaucrat guest3("guset3", 6);

	Form *form1 = new ShrubberyCreationForm("Home");
	Form *form2 = new RobotomyRequestForm("INTP");
	Form *form3 = new PresidentialPardonForm("Criminal");

	std::cout
		<< admin << std::endl
		<< guest1 << std::endl
		<< guest2 << std::endl
		<< guest3 << std::endl << std::endl;
	
	std::cout
		<< *form1 << std::endl << std::endl
		<< *form2 << std::endl << std::endl
		<< *form3 << std::endl << std::endl;

	guest1.signForm(*form1);
	guest2.signForm(*form2);
	guest3.signForm(*form3);

	std::cout << std::endl;

	guest1.executeForm(*form1);
	guest2.executeForm(*form2);
	guest3.executeForm(*form3);

	std::cout << std::endl;

	admin.executeForm(*form1);
	admin.executeForm(*form2);
	admin.executeForm(*form3);

	delete form1;
	delete form2;
	delete form3;

	return (0);
}
