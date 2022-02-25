/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 10:35:35 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/25 22:52:50 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/* ************************************************************************** */
// Constructor and Destructor

Character::Character( void ) {}

Character::Character( const std::string &name ) {
	
	this->name = name;
	for (int i = 0; i < CAPACITY; i++) {
		this->inventory[i] = NULL;
	}
}

Character::Character( const Character &Ref ) { *this = Ref; }

Character::~Character( void ) {

	for (int i = 0; i < CAPACITY; i++) {
		if (this->inventory[i] != NULL) {
			delete inventory[i];
		}
	}
}

/* ************************************************************************** */
// Assignment operator

Character &Character::operator=( const Character &Ref ) {

	this->name = Ref.getName();
	for (int i = 0; i < CAPACITY; i++) {
		const AMateria *temp = Ref.getMateria(i);
		if (temp == NULL)
			this->inventory[i] = temp->clone(); // 오버라이딩된 함수 동적바인딩
		else
			this->inventory[i] = NULL;
	}
	return (*this);
}

/* ************************************************************************** */
// Public Member Functions

std::string const &Character::getName( void ) const { return (this->name); }

void Character::equip( AMateria *m ) {
	
	for (int i = 0; i < CAPACITY; i++) {
		if (this->inventory[i] == NULL) {
			this->inventory[i] = m;
			return ;
		}
	}
	std::cout << this->getName() << ": ";
	std::cout << "There is no empty slots." << std::endl;
}

// unequip method must NOT delete Materia! -> Materia 미아 -> leak?
void Character::unequip( int idx ) {

	if (!(0 <= idx && idx < CAPACITY)) {
		std::cout << this->getName() << ": ";
		std::cout << "Inventory out of range." << std::endl;
		return ;
	}
	this->inventory[idx] = NULL;
}

void Character::use( int idx, ICharacter &target ) {

	if (!(0 <= idx && idx < CAPACITY)) {
		std::cout << this->getName() << ": ";
		std::cout << "Inventory out of range." << std::endl;
		return ;
	}

	if (this->inventory[idx] == NULL) {
		std::cout << this->getName() << ": ";
		std::cout << "..." << std::endl;
		return ;
	}

	std::cout << this->getName() << ": ";
	this->inventory[idx]->use(target); // 오버라이딩된 함수 동적바인딩
}

AMateria const *Character::getMateria( const int idx ) const {
	return (this->inventory[idx]);
}
