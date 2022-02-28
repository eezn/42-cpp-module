/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 01:03:29 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/28 12:14:37 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ( void ) {

	Bureaucrat admin("admin", 20);
	Bureaucrat guest("guest", 100);

	Form top_secret("top_secret", 20, 10);
	Form secret("secret", 50, 40);
	Form shared("shared", 100, 100);
	Form test;

	try { Form("test", 0, 150); }
	catch (const std::exception &e) { std::cout << e.what() << std::endl; }
	try { Form("test", 150, 0); }
	catch (const std::exception &e) { std::cout << e.what() << std::endl; }
	try { Form("test", 151, 1); }
	catch (const std::exception &e) { std::cout << e.what() << std::endl; }
	try { Form("test", 1, 151); }
	catch (const std::exception &e) { std::cout << e.what() << std::endl; }

	std::cout
	<< top_secret << std::endl
	<< secret << std::endl
	<< shared << std::endl;

	std::cout
	<< admin << std::endl
	<< guest << std::endl;

	guest.signForm(shared);
	guest.signForm(secret);
	guest.signForm(top_secret);

	admin.signForm(shared);
	admin.signForm(secret);
	admin.signForm(top_secret);


	return (0);
}