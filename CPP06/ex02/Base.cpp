/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 15:55:32 by jin-lee           #+#    #+#             */
/*   Updated: 2022/03/06 17:53:49 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate( void ) {

	std::srand((unsigned int)std::time(NULL));
	const int random = (rand() % 3);

	std::cout << "Generate: ";
	switch (random) {
		case 0:
			std::cout << "A" << std::endl;
			return (new A());
		case 1:
			std::cout << "B" << std::endl;
			return (new B());
		case 2:
			std::cout << "C" << std::endl;
			return (new C());
		default:
			return (NULL);
	}
}

void	identify( Base *p ) {

	std::cout << "Pointer_Identidfy: ";
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void	identify( Base &p ) {

	std::cout << "Reference_Identify: ";
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast) {}

	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch (std::bad_cast) {}

	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch (std::bad_cast) {}
}
