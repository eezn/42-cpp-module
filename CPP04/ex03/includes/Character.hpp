/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 10:35:20 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/25 23:14:34 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

#define CAPACITY 4

class Character : public ICharacter {

private:

	std::string	name;
	AMateria	*inventory[CAPACITY]; // 추상클래스 인스턴스화 불가능, 포인터는 가능

public:

	Character( void );
	Character( const std::string &name );
	Character( const Character &Ref );
	~Character( void );

	Character &operator=( const Character &Ref );

	std::string	const	&getName( void ) const;
	void				equip( AMateria* m );
	void				unequip( int idx );
	void				use( int idx, ICharacter& target );

	AMateria const				*getMateria( const int idx ) const;

};

#endif