/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 10:35:22 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/25 21:50:06 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {

public:

	Cure( void );
	Cure( const Cure &Ref );
	virtual ~Cure( void );

	Cure &operator=( const Cure &Ref );
	
	AMateria	*clone( void ) const; // 오버라이딩
	void		use( ICharacter &target ); // 오버라이딩

};

#endif