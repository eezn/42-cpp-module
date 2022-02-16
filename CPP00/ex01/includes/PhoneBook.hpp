/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 12:51:21 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/17 03:08:26 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>

# define PB_SIZE 8
# define BUFF_SIZE 1024

# define RED "\e[31m"
# define GREEN "\e[32m"
# define YELLOW "\e[33m"
# define PURPLE "\e[34m"
# define PINK "\e[35m"
# define BASIC "\e[37m"
# define EOC "\e[0m"

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
	void			SetField(int field);
	std::string		GetField(int field);
	Contact();
	~Contact();
};

class PhoneBook {
private:
	Contact			contacts[PB_SIZE];
	int				command_type;
	int				count;
	bool			ismax;
	void			ClearCin();
	void			ApplyFormat(std::string content, bool islast);
	void			ReadContact(int end);
	
public:
	void			WarningMesssage();
	void			SetDefault();
	void			PromptInCommand();
	int				GetCommandType();
	void			AddContact();
	void			SearchContact();
	PhoneBook();
	~PhoneBook();
};

#endif