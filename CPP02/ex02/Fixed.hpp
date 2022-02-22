/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:06:59 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/22 11:16:46 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

private:

	int					value;
	static const int	fractionalBits = 8;


public:

	Fixed( void );
	Fixed( const Fixed &fRef );
	Fixed( const int value );
	Fixed( const float value );
	~Fixed( void );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	int		toInt( void ) const;
	float	toFloat( void ) const;

	static Fixed		&min( Fixed &a, Fixed &b );
	static Fixed		&max( Fixed &a, Fixed &b );
	static const Fixed	&min( const Fixed &a, const Fixed &b );
	static const Fixed	&max( const Fixed &a, const Fixed &b );

	// Assignment operator
	Fixed	&operator=( const Fixed &b );

	// Comparison operators (Logical operators)
	bool	operator<( const Fixed &b );
	bool	operator>( const Fixed &b );
	bool	operator<=( const Fixed &b );
	bool	operator>=( const Fixed &b );
	bool	operator==( const Fixed &b );
	bool	operator!=( const Fixed &b );

	// Arithmetic operators
	Fixed	operator+( const Fixed &b );
	Fixed	operator-( const Fixed &b );
	Fixed	operator*( const Fixed &b );
	Fixed	operator/( const Fixed &b );

	// Increment and Decrement operator
	Fixed	&operator++( void );	// ++a : pre-increment
	Fixed	&operator--( void );	// --a : pre-decrement
	Fixed	operator++( int );		// a++ : post-increment
	Fixed	operator--( int );		// a-- : post-decrement

};

std::ostream &operator<<( std::ostream &out, const Fixed &fRef );

#endif