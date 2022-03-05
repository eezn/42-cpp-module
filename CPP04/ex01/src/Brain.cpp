/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:23:42 by jin-lee           #+#    #+#             */
/*   Updated: 2022/03/05 10:07:37 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/* ************************************************************************** */
// Constructor and Destructor

Brain::Brain( void ) {

	std::cout << CYAN << "Brain::" << EOC;
	std::cout << "Constructor called" << std::endl;

	const std::string think[7] = {
		"Relaxed", "Nervous", "Bored", "Angry", "Sleepy", "Hungry", "Happy" };

	for (int i = 0; i < CAPACITY; i++) {
		this->ideas[i] = think[rand() % 7];
	}
}

Brain::Brain( const Brain &bRef ) {

	std::cout << CYAN << "Brain::" << EOC;
	std::cout << "Copy constructor called" << std::endl;
	*this = bRef;
}

Brain::~Brain( void ) {

	std::cout << CYAN << "Brain::" << EOC;
	std::cout << "Destructor called" << std::endl;
}

/* ************************************************************************** */
// Assignment operator

Brain &Brain::operator=( const Brain &bRef ) {

	for (int i = 0; i < CAPACITY; i++) {
		this->ideas[i] = bRef.getIdea(i);
	}
	return (*this);
}

/* ************************************************************************** */
// Public Member Functions

std::string Brain::getIdea( const int &idx ) const { return (this->ideas[idx]); }
