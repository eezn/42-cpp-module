/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 01:43:38 by jin-lee           #+#    #+#             */
/*   Updated: 2022/03/08 03:18:10 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <deque>

/* ************************************************************************** */
// Constructor and Destructor

// Private
Span::Span( void ) {}

Span::Span( const unsigned int &N ): N(N) {}

Span::Span( const Span &Ref ) {
	
	this->N = Ref.size();
	this->vec = Ref.getContainer();
}

Span::~Span( void ) {}

/* ************************************************************************** */
// Assignment operator

Span &Span::operator=( const Span &Ref ) {

	this->N = Ref.size();
	this->vec = Ref.getContainer();
	return (*this);
}

/* ************************************************************************** */
// Public Member Functions

unsigned int		Span::size( void ) const { return (this->N); }
std::vector<int>	Span::getContainer( void ) const { return (this->vec); }

void				Span::addNumber( const int &input ) {

	if (vec.size() >= N)
		throw AlreadyFullException();
	this->vec.insert(vec.end(), input);
}

void				Span::addNumber( const int &begin, const int &end ) {

	if (!(begin < end))
		throw InvalidRangeException();
	if (end - begin > (int)N)
		throw NotEnoughCapacityException();
	std::deque<int> dq;
	for (int i = begin; i < end; i++) { dq.push_back(i); }
	for (std::deque<int>::iterator it = dq.begin(); it != dq.end(); it++) {
		if (vec.size() >= N)
			throw AlreadyFullException();
		this->vec.insert(vec.end(), *it);
	}
}

unsigned int		Span::shortestSpan( void ) {

	if (vec.size() < 2)
		throw CannotCalculateSpanException();
	std::vector<int> temp = this->vec;
	std::sort(temp.begin(), temp.end());
	int diff = INT32_MAX;
	for (int i = 1; i < static_cast<int>(temp.size()); i++) {
		if (diff > temp[i] - temp[i - 1])
			diff = temp[i] - temp[i - 1];
	}
	return (static_cast<unsigned int>(diff));
}

unsigned int		Span::longestSpan( void ) {

	if (vec.size() < 2)
		throw CannotCalculateSpanException();
	std::vector<int> temp = this->vec;
	std::sort(temp.begin(), temp.end());
	return (static_cast<unsigned int>(temp.back() - temp.front()));
}
