/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 12:51:21 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/18 05:06:33 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>

#define PB_SIZE 8
#define BUFF_SIZE 512

#define BLACK "\e[0;30m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[0;33m"
#define BLUE "\e[0;34m"
#define PURPLE "\e[0;35m"
#define CYAN "\e[0;36m"
#define LIGHTGRAY "\e[0;37m"
#define EOC "\e[0m"

enum CommandType {
	NO_MATCH = -1,
	EXIT,
	SEARCH,
	ADD
};

enum Field {
	FIRST_NAME,
	LAST_NAME,
	NICKNAME,
	PHONE_NUMBER,
	DARKEST_SECRET
};

class Contact {

private:

	std::string		first_name;
	std::string		last_name;
	std::string		nickname;
	std::string		phone_number;
	std::string		darkest_secret;


public:

	Contact( void );
	~Contact( void );

	void			setField( int field );
	std::string		getField( int field );

};

class PhoneBook {

private:

	Contact			contacts[PB_SIZE];
	int				command_type;
	int				count;
	bool			bIsMax;

	void			clear( void );
	void			applyFormat( std::string content, bool bIsLast );
	void			readContact( int end );


public:

	PhoneBook( void );
	~PhoneBook( void );

	void			warningMesssage( void );
	void			setDefault( void );
	void			promptInCommand( void );
	int				getCommandType( void );
	void			addContact( void );
	void			searchContact( void );

};

#endif