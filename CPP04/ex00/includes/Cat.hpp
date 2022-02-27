/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:24:42 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/24 14:35:17 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {

public:

	Cat( void );
	Cat( const Cat &cRef );
	virtual ~Cat( void );

	Cat	&operator=( const Cat &cRef );

	virtual void	makeSound( void ) const;

};

#endif