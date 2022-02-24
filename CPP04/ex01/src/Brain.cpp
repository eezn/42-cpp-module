/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:23:42 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/24 19:43:51 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/* ************************************************************************** */
// Assignment operator

Brain &Brain::operator=( const Brain &bRef ) {

	for (int i = 0; i < CAPACITY; i++) {
		this->ideas[i] = bRef.getIdeas(i);
	}
	return (*this);
}

/* ************************************************************************** */
// Constructor and Destructor

Brain::Brain( void ) {

	std::cout << CYAN << "Brain::" << EOC;
	std::cout << "Constructor called" << std::endl;
	for (int i = 0; i < CAPACITY; i++) {
		this->ideas[i] = "i have no idea..";
	}
	this->ideas[0] = "Relaxed";
	this->ideas[1] = "Nervous";
	this->ideas[2] = "Bored";
	this->ideas[3] = "Angry";
	this->ideas[4] = "Sleepy";
	this->ideas[5] = "Hungry";
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
// Public Member Functions

std::string Brain::getIdeas( const int idx ) const {

	return (this->ideas[idx]);
}
