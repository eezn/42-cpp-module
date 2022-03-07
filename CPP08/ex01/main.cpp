/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 02:36:08 by jin-lee           #+#    #+#             */
/*   Updated: 2022/03/08 03:18:36 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main( void ) {
	
	std::cout << GREEN;
	{
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << YELLOW;
	{
		Span sp = Span(5);
		sp.addNumber(7);
		sp.addNumber(6);
		sp.addNumber(5);
		sp.addNumber(4);
		sp.addNumber(1);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		try { sp.addNumber(0); }
		catch(std::exception &e) { std::cout << e.what() << std::endl; }
	}
	std::cout << RED;
	{
		Span sp = Span(10000);
		try { sp.addNumber(0, 10001); }
		catch(std::exception &e) { std::cout << e.what() << std::endl; }
	}
	{
		Span sp = Span(10000);
		try { sp.addNumber(10000, 0); }
		catch(std::exception &e) { std::cout << e.what() << std::endl; }
	}
	{
		Span sp = Span(10000);
		sp.addNumber(-1);
		try { sp.addNumber(0, 10000); }
		catch(std::exception &e) { std::cout << e.what() << std::endl; }
	}
	std::cout << GREEN;
	{
		Span sp = Span(15000);
		try { sp.addNumber(0, 15000); }
		catch(std::exception &e) { std::cout << e.what() << std::endl; }
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << EOC;

	return (0);
}
