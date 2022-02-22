/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:06:59 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/21 18:05:37 by jin-lee          ###   ########.fr       */
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

	Fixed	&operator=( const Fixed &fRef );

};

std::ostream &operator<<( std::ostream &out, const Fixed &fRef );

#endif