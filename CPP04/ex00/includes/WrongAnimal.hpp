/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:01:01 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/24 15:03:46 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

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

class WrongAnimal {

protected:

	std::string	type;


public:

	WrongAnimal( void );
	WrongAnimal( const WrongAnimal &waRef );
	virtual ~WrongAnimal( void );
	
	WrongAnimal	&operator=( const WrongAnimal &waRef );

	std::string		getType( void ) const;
	void			makeSound( void ) const;

};

#endif