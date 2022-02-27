/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 10:35:18 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/25 22:00:18 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>

#include "ICharacter.hpp"

#define BLACK "\e[0;30m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[0;33m"
#define BLUE "\e[0;34m"
#define PURPLE "\e[0;35m"
#define CYAN "\e[0;36m"
#define LIGHTGRAY "\e[0;37m"
#define EOC "\e[0m"

class AMateria {

protected:

	std::string	type;

public:

	AMateria( void );
	AMateria( const std::string &type );
	AMateria( const AMateria &Ref );
	virtual ~AMateria( void );

	AMateria &operator=( const AMateria &Ref );

	std::string const	&getType( void ) const;
	virtual AMateria	*clone( void ) const = 0;
	virtual void		use( ICharacter &target );

};

#endif