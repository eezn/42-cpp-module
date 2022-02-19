/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 17:42:53 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/19 19:31:22 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen( void ) {}

Karen::~Karen( void ) {}

void Karen::debug( void ) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << BLUE
	<< "I love to get extra bacon "
	<< "for my 7XL-double-cheese-triple-pickle-special-ketchup burger."
	<< std::endl
	<< "I just love it!"
	<< EOC << std::endl << std::endl;
}

void Karen::info( void ) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << GREEN
	<< "I cannot believe adding extra bacon cost more money."
	<< std::endl
	<< "You don’t put enough!"
	<< std::endl
	<< "If you did I would not have to ask for it!"
	<< EOC << std::endl << std::endl;
}

void Karen::warning( void ) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << YELLOW
	<< "I think I deserve to have some extra bacon for free."
	<< std::endl
	<< "I’ve been coming here "
	<< "for years and you just started working here last month."
	<< EOC << std::endl << std::endl;
}

void Karen::error( void ) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << RED
	<< "This is unacceptable, "
	<< "I want to speak to the manager now."
	<< EOC << std::endl << std::endl;
}

void Karen::complain( std::string level ) {

	void (Karen::*funcPtrArr[4])( void ) = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};

	std::string levelArr[4] = {
		"DEBUG", "INFO", "WARNING", "ERROR"
	};

	for (int i = 0; i < 4; i++) {
		if (level == levelArr[i])
			(this->*(funcPtrArr[i]))();
	}
}
