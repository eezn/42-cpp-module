/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:49:54 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/24 12:33:16 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* ************************************************************************** */
// Constructor and Destructor

ScavTrap::ScavTrap( void ) : ClapTrap() {

	std::cout << CYAN << "ScavTrap: " << EOC;
	std::cout << "Default constructor called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name) {

	std::cout << CYAN << "ScavTrap: " << EOC;
	std::cout << "Constructor called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap( const ScavTrap &sRef ) : ClapTrap(sRef) {

	std::cout << CYAN << "ScavTrap: " << EOC;
	std::cout << "Copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap( void ) {

	std::cout << CYAN << "ScavTrap: " << EOC;
	std::cout << "Destructor called" << std::endl;
}

/* ************************************************************************** */
// Public Member Functions

void ScavTrap::attack( std::string const &target ) {
	
	std::cout << CYAN << "ScavTrap: ";
	ClapTrap::attack(target);
}

void ScavTrap::guardGate( void ) {

	std::cout << YELLOW
	<< this->name
	<< " have enterred in Gate keeper mode."
	<< EOC << std::endl;
}

/* ************************************************************************** */
// Assignment operator

ScavTrap &ScavTrap::operator=( const ScavTrap &sRef ) {
	
	ClapTrap::operator=(sRef);
	return (*this);
}
