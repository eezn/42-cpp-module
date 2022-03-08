/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 23:03:51 by jin-lee           #+#    #+#             */
/*   Updated: 2022/03/08 03:10:08 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <vector>

#define BLACK "\e[0;30m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[0;33m"
#define BLUE "\e[0;34m"
#define PURPLE "\e[0;35m"
#define CYAN "\e[0;36m"
#define LIGHTGRAY "\e[0;37m"
#define EOC "\e[0m"

class Span {

private:

	unsigned int		N;
	std::vector<int>	vec;

	Span( void );

public:

	Span( const unsigned int &N );
	Span( const Span &Ref );
	virtual ~Span( void );

	Span &operator=( const Span &Ref );

	unsigned int		size( void ) const;
	std::vector<int>	getContainer( void ) const;

	void				addNumber( const int &input );
	void				addNumber( const int &begin, const int &end );
	unsigned int		shortestSpan( void );
	unsigned int		longestSpan( void );

	class AlreadyFullException : public std::exception {
	public:
		const char *what() const throw() {
			return ("Container already Full");
		}
	};

	class CannotCalculateSpanException : public std::exception {
	public:
		const char *what() const throw() {
			return ("Cannot Calculate Span");
		}
	};

	class InvalidRangeException : public std::exception {
	public:
		const char *what() const throw() {
			return ("Invaild Range");
		}
	};

	class NotEnoughCapacityException : public std::exception {
	public:
		const char *what() const throw() {
			return ("Not enough capacity");
		}
	};

};

#endif