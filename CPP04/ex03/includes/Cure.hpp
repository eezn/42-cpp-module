/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 10:35:22 by jin-lee           #+#    #+#             */
/*   Updated: 2022/03/05 12:27:27 by jin-lee          ###   ########.fr       */
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
	
	AMateria	*clone( void ) const;
	void		use( ICharacter &target );

};

#endif