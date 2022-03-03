/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:06:59 by jin-lee           #+#    #+#             */
/*   Updated: 2022/03/03 21:05:16 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {

private:
	// 클래스 변수는 클래스 선언에서 초기화
	static const int	fractionalBits = 8;
	int					value;


public:

	Fixed( void );
	Fixed( const Fixed &fRef );
	~Fixed( void );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	Fixed	&operator=( const Fixed &fRef );

};

#endif