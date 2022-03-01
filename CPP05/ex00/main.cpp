/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 17:54:11 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/28 00:45:19 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ( void ) {

	Bureaucrat bureaucrat("jin-lee", 30);

	try {
		bureaucrat.increaseGrade(20);		// 10
		std::cout << bureaucrat << std::endl;
		bureaucrat.increaseGrade(10);		// 0 (throw)
		std::cout << bureaucrat << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		bureaucrat.decreaseGrade(140);	// 150
		std::cout << bureaucrat << std::endl;
		bureaucrat.decreaseGrade(1);	// 151 (throw)
		std::cout << bureaucrat << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		bureaucrat.decreaseGrade(-150);	// 0 (throw)
		std::cout << bureaucrat << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		bureaucrat.increaseGrade(-1);		// 151 (throw)
		std::cout << bureaucrat << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
