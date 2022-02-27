/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 17:54:11 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/27 20:33:59 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ( void ) {

	Bureaucrat bureaucrat("jin-lee", 30);

	try {
		bureaucrat.rankupGrade(20);		// 10
		std::cout << bureaucrat << std::endl;
		bureaucrat.rankupGrade(10);		// 0 (throw)
		std::cout << bureaucrat << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		bureaucrat.rankdownGrade(140);	// 150
		std::cout << bureaucrat << std::endl;
		bureaucrat.rankdownGrade(1);	// 151 (throw)
		std::cout << bureaucrat << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		bureaucrat.rankdownGrade(-150);	// 0 (throw)
		std::cout << bureaucrat << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		bureaucrat.rankupGrade(-1);		// 151 (throw)
		std::cout << bureaucrat << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
