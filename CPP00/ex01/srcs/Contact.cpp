/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:52:48 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/17 02:25:36 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact() {}
Contact::~Contact() {}

void Contact::SetField(int field)
{
	if (field == FIRST_NAME)
	{
		std::cout << GREEN << " Fisrt Name     : " << EOC;
		getline(std::cin, this->first_name, '\n');
	}
	else if (field == LAST_NAME)
	{
		std::cout << GREEN << " Last Name      : " << EOC;
		getline(std::cin, this->last_name, '\n');
	}
	else if (field == NICKNAME)
	{
		std::cout << GREEN << " Nickname       : " << EOC;
		getline(std::cin, this->nickname, '\n');
	}
	else if (field == PHONE_NUMBER)
	{
		std::cout << GREEN << " Phone Number   : " << EOC;
		getline(std::cin, this->phone_number, '\n');
	}
	else if (field == DARKEST_SECRET)
	{
		std::cout << GREEN << " Darkest Secret : " << EOC;
		getline(std::cin, this->darkest_secret, '\n');
	}
}

std::string Contact::GetField(int field)
{
	if (field == FIRST_NAME)
		return (this->first_name);
	else if (field == LAST_NAME)
		return (this->last_name);
	else if (field == NICKNAME)
		return (this->nickname);
	else if (field == PHONE_NUMBER)
		return (this->phone_number);
	else if (field == DARKEST_SECRET)
		return (this->darkest_secret);
	else
		return (NULL);
}
