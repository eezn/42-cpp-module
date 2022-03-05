/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 10:35:24 by jin-lee           #+#    #+#             */
/*   Updated: 2022/03/05 12:27:34 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {

public:

	Ice( void );
	Ice( const Ice &Ref );
	virtual ~Ice( void );

	Ice &operator=( const Ice &Ref );
	
	AMateria	*clone( void ) const;
	void		use( ICharacter &target );

};

#endif