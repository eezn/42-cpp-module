/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:00:14 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/24 15:04:56 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public:

	WrongCat( void );
	WrongCat( const WrongCat &wcRef );
	virtual ~WrongCat( void );

	WrongCat	&operator=( const WrongCat &wcRef );

	void	makeSound( void ) const;

};

#endif