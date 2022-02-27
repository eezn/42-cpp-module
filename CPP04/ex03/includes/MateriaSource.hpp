/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 10:35:31 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/25 23:14:15 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

#define SRC_CAPACITY 4

class MateriaSource : public IMateriaSource {

private:

	AMateria	*materia_src[SRC_CAPACITY]; // 추상클래스 인스턴스화 불가능, 포인터는 가능

public:

	MateriaSource( void );
	MateriaSource( const MateriaSource &Ref );
	~MateriaSource( void );

	MateriaSource &operator=( const MateriaSource &Ref );
	
	void		learnMateria( AMateria *materia );
	AMateria	*createMateria( std::string const &type );

	AMateria const		*getMateria( const int idx ) const;
	
};

#endif