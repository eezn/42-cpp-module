/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:44:52 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/23 19:04:39 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* ************************************************************************** */
// Constructor and Destructor

ClapTrap::ClapTrap( void ) {

	std::cout << "Default constructor called" << std::endl;
	this->name = "???";
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap( std::string name ) {

	std::cout << "Constructor called" << std::endl;
	this->name = name;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap( const ClapTrap &cRef ) {

	std::cout << "Copy constructor called" << std::endl;
	*this = cRef;
}

ClapTrap::~ClapTrap( void ) {

	std::cout << "Destructor called" << std::endl;
}

/* ************************************************************************** */
// Public Member Functions

std::string	ClapTrap::getName( void ) const { return (this->name); }
unsigned int ClapTrap::getHitPoints( void ) const { return (this->hit_points); }
unsigned int ClapTrap::getEnergyPoints( void ) const { return (this->energy_points); }
unsigned int ClapTrap::getAttackDamage( void ) const { return (this->attack_damage); }

void ClapTrap::printStatus( void ) const {

	std::cout << PURPLE;
	std::cout << ">>> " << getName() << "'s Status" << std::endl;
	std::cout << "| HitPoints: " << getHitPoints() << std::endl;
	std::cout << "| EnergyPoints: " << getEnergyPoints() << std::endl;
	std::cout << "| AttackDamage: " << getAttackDamage() << std::endl;
	std::cout << EOC;
}

void ClapTrap::attack( std::string const &target ) {

	std::cout << YELLOW
	<< "ClapTrap " << this->name
	<< " attack " << target
	<< ", causing " << this->attack_damage
	<< " points of damage!"
	<< EOC << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount ) {

	int temp = this->energy_points;
	temp -= amount;
	if (temp < 0)
		this->energy_points = 0;
	else
		this->energy_points = (unsigned int)temp;

	std::cout << RED
	<< "ClapTrap " << this->name
	<< " takes " << amount << " points of damage!"
	<< EOC << std::endl;
	printStatus();
}

void ClapTrap::beRepaired( unsigned int amount ) {

	std::cout << GREEN
	<< "ClapTrap " << this->name
	<< " repaied " << amount << " points of energy."
	<< EOC << std::endl;
	this->energy_points += amount;
	printStatus();
}

/* ************************************************************************** */
// Assignment operator

ClapTrap &ClapTrap::operator=( const ClapTrap &cRef ) {
	
	std::cout << "Assignation operator called" << std::endl;
	this->name = cRef.getName();
	this->hit_points = cRef.getHitPoints();
	this->energy_points = cRef.getEnergyPoints();
	this->attack_damage = cRef.getAttackDamage();
	return (*this);
}
