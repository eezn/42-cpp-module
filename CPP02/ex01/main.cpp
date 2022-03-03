/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:07:13 by jin-lee           #+#    #+#             */
/*   Updated: 2022/03/03 23:58:23 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {

	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );

	a = Fixed( 1234.4321f );

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	// Fixed e( 8388608 );	// 0000 0000 0111 1111 1111 1111 1111 1111
	// std::cout << "e is " << e << std::endl;
	// std::cout << "e is " << e.toInt() << std::endl;

	// Fixed f( 8388607 );	// 0000 0000 1000 0000 0000 0000 0000 0000
	// std::cout << "f is " << f << std::endl;
	// std::cout << "f is " << f.toInt() << std::endl;

	return (0);
}
