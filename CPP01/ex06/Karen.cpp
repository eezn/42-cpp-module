/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 17:42:53 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/19 19:20:17 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen( void ) {}

Karen::~Karen( void ) {}

void Karen::debug( void ) {
	std::cout << BLUE
	<< "I love to get extra bacon "
	<< "for my 7XL-double-cheese-triple-pickle-special-ketchup burger. "
	<< "I just love it!" 
	<< EOC << std::endl;
}

void Karen::info( void ) {
	std::cout << GREEN
	<< "I cannot believe adding extra bacon cost more money. "
	<< "You don’t put enough! "
	<< "If you did I would not have to ask for it!"
	<< EOC << std::endl;
}

void Karen::warning( void ) {
	std::cout << YELLOW
	<< "I think I deserve to have some extra bacon for free. "
	<< "I’ve been coming here "
	<< "for years and you just started working here last month."
	<< EOC << std::endl;
}

void Karen::error( void ) {
	std::cout << RED
	<< "This is unacceptable, "
	<< "I want to speak to the manager now."
	<< EOC << std::endl;
}

void Karen::complain( std::string level ) {

	std::string levelArr[4] = {
		"DEBUG", "INFO", "WARNING", "ERROR"
	};

	for (int i = 0; i < 4; i++) {
		if (level == levelArr[i]) {
			switch (i) {
				case 0:
					this->debug();
				case 1:
					this->info();
				case 2:
					this->warning();
				case 3:
					this->error();
				return ;
			}
		}
	}
	std::cout << PURPLE
	<< "[ Probably complaining about insignificant problems ]"
	<< EOC << std::endl;
}
