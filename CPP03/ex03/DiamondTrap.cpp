/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 21:52:48 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/24 12:37:26 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/* ************************************************************************** */
// Constructor and Destructor

DiamondTrap::DiamondTrap( void )
: ClapTrap( std::string("???") + "_clap_name" ) {

	std::cout << CYAN << "DiamondTrap: " << EOC;
	std::cout << "Default constructor called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 30;
}

DiamondTrap::DiamondTrap( std::string name )
: ClapTrap( name + "_clap_name" ) {

	std::cout << CYAN << "DiamondTrap: " << EOC;
	std::cout << "Constructor called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 30;
}

DiamondTrap::DiamondTrap ( const DiamondTrap &dRef )
: ClapTrap(dRef) {

	std::cout << CYAN << "DiamondTrap: " << EOC;
	std::cout << "Copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap( void ) {

	std::cout << CYAN << "DiamondTrap: " << EOC;
	std::cout << "Destructor called" << std::endl;
}

/* ************************************************************************** */
// Public Member Functions

void DiamondTrap::attack( std::string const &target ) {

	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI( void ) {

	std::cout << std::endl;
	std::cout << GREEN
	<< "Who am I? "<< getName()
	<< EOC << std::endl;
	std::cout << std::endl;
}

/* ************************************************************************** */
// Assignment operator

DiamondTrap &DiamondTrap::operator=( const DiamondTrap &dRef ) {

	ClapTrap::operator=(dRef);
	return (*this);
}