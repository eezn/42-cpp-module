/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:00:27 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/24 21:22:38 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

#define BLACK "\e[0;30m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[0;33m"
#define BLUE "\e[0;34m"
#define PURPLE "\e[0;35m"
#define CYAN "\e[0;36m"
#define LIGHTGRAY "\e[0;37m"
#define EOC "\e[0m"

class Animal {

protected:

	std::string	type;


public:

	Animal( void );
	Animal( const Animal &aRef );
	virtual ~Animal( void );
	
	Animal	&operator=( const Animal &aRef );

	std::string		getType( void ) const;
	virtual void	makeSound( void ) const = 0;

};

#endif