/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 21:33:51 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/23 22:17:51 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* ************************************************************************** */
// Constructor and Destructor

FragTrap::FragTrap( void ) : ClapTrap () {

	std::cout << "FragTrap: Default constructor called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name) {

	std::cout << "FragTrap: Constructor called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

FragTrap::FragTrap( const FragTrap &fRef ) : ClapTrap(fRef) {

	std::cout << "FragTrap: Copy constructor called" << std::endl;
}

FragTrap::~FragTrap( void ) {

	std::cout << "FragTrap: Destructor called" << std::endl;
}

/* ************************************************************************** */
// Public Member Functions

void FragTrap::attack( std::string const &target ) {
	
	std::cout << BLUE << "FragTrap: ";
	ClapTrap::attack(target);
}

void FragTrap::highFivesGuys( void ) {

	std::cout << YELLOW
	<< this->name
	<< ": Why don't we do a highfive?"
	<< EOC << std::endl;
}

/* ************************************************************************** */
// Assignment operator

FragTrap &FragTrap::operator=( const FragTrap &fRef ) {
	
	ClapTrap::operator=(fRef);
	return (*this);
}
