/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 01:58:59 by jin-lee           #+#    #+#             */
/*   Updated: 2022/03/06 15:33:46 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <string>

class Data {

private:

	int				num;
	std::string		str;


public:

	Data( void );
	Data( const int &num, const std::string &str );
	Data( const Data &Ref );
	virtual ~Data( void );

	Data &operator=( const Data &Ref );

	int			getNum( void ) const;
	std::string	getStr( void ) const;

};

uintptr_t	serialize( Data *ptr );
Data		*deserialize( uintptr_t raw );

#endif