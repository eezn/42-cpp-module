/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:06:59 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/21 12:43:09 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {

private:

	int	value;


public:

	Fixed( void );
	Fixed( const Fixed &fRef );
	~Fixed( void );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	Fixed	&operator=( const Fixed &fRef );

};

#endif