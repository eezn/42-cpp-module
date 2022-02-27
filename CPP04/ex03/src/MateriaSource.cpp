/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 10:35:43 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/25 23:04:55 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/* ************************************************************************** */
// Constructor and Destructor

MateriaSource::MateriaSource( void ) {
	
	for (int i = 0; i < SRC_CAPACITY; i++) {
		this->materia_src[i] = NULL;
	}
}

MateriaSource::MateriaSource( const MateriaSource &Ref ) { *this = Ref; }

MateriaSource::~MateriaSource( void ) {
	
	for (int i = 0; i < SRC_CAPACITY; i++) {
		if (this->materia_src[i] != NULL)
			delete materia_src[i];
	}
}

/* ************************************************************************** */
// Assignment operator

MateriaSource &MateriaSource::operator=( const MateriaSource &Ref ) {
	
	for (int i = 0; i < SRC_CAPACITY; i++) {
		const AMateria *temp = Ref.getMateria(i);
		if (temp == NULL)
			this->materia_src[i] = temp->clone();
		else
			this->materia_src[i] = NULL;
	}
	return (*this);
}

/* ************************************************************************** */
// Public Member Functions

void MateriaSource::learnMateria( AMateria *materia ) {

	for (int i = 0; i < SRC_CAPACITY; i++) {
		if (this->materia_src[i] == NULL) {
			this->materia_src[i] = materia;
			return ;
		}
	}
	std::cout << "MateriaSource: There is no empty slots." << std::endl;
}

AMateria *MateriaSource::createMateria( std::string const &type ) {

	for (int i = 0; i < SRC_CAPACITY; i++) {
		if (this->materia_src[i] != NULL && this->materia_src[i]->getType() == type) {
			return (this->materia_src[i]->clone());
		}
	}
	std::cout << "MateriaSource: There is no matching type"
	<< ", cannot create Materia." << std::endl;
	return (NULL);
}

AMateria const *MateriaSource::getMateria( const int idx ) const {
	return (this->materia_src[idx]);
}
