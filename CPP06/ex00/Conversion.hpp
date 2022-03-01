/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:08:18 by jin-lee           #+#    #+#             */
/*   Updated: 2022/03/02 00:54:15 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <exception>

class Conversion {

private:

	const std::string	input;
	const double		value;

	Conversion( void );


public:

	Conversion( const std::string &input );
	Conversion( const Conversion &Ref );
	virtual ~Conversion( void );

	Conversion &operator=( const Conversion &Ref );

	std::string		getInput( void ) const;
	double			getValue( void ) const;

	char			toChar( void ) const;
	int				toInt( void ) const;
	float			toFloat( void ) const;
	double			toDouble( void ) const;


	class ImpossibleException : public std::exception {
	public:
		const char *what() const throw() {
			return ("impossible");
		}
	};

	class NonDisplayableException : public std::exception {
	public:
		const char *what() const throw() {
			return ("Non displayable");
		}
	};

	class OverFlowException : public std::exception {
	public:
		const char *what() const throw() {
			return ("Overflow");
		}
	};

	class UnderFlowException : public std::exception {
	public:
		const char *what() const throw() {
			return ("Underflow");
		}
	};

};

std::ostream &operator<<( std::ostream &out, const Conversion &Ref );

#endif