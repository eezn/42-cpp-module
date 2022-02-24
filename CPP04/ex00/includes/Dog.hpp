/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:11:29 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/24 14:35:18 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {

public:

	Dog( void );
	Dog( const Dog &dRef );
	virtual ~Dog( void );

	Dog	&operator=( const Dog &dRef );

	virtual void	makeSound( void ) const;

};

#endif