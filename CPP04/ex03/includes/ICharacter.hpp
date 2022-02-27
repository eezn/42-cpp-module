/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 10:35:26 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/25 23:13:08 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <iostream>

class AMateria;

class ICharacter {

public:

	virtual ~ICharacter( void ) {} // 소멸자 내부 정의, 인터페이스는 따로 파일이 없음

	virtual std::string	const	&getName( void ) const = 0;
	virtual void				equip( AMateria* m ) = 0;
	virtual void				unequip( int idx ) = 0;
	virtual void				use( int idx, ICharacter& target ) = 0;

};

#endif