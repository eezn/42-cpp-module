/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 12:50:46 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/17 09:07:16 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {}
PhoneBook::~PhoneBook() {}

void PhoneBook::WarningMesssage()
{
	std::cout << RED 
	<< "(If you type 'CTRL + D', something surprising might happen?)" 
	<< EOC 
	<< std::endl;
}

void PhoneBook::SetDefault()
{
	count = 0;
	bIsMax = false;
}

void PhoneBook::ClearCin()
{
	std::cin.clear();
	std::cin.ignore(BUFF_SIZE, '\n');
}

void PhoneBook::PromptInCommand()
{
	std::string	command;
	std::cout << GREEN << "Please input Command [ ADD / SEARCH / EXIT ]: " << EOC;
	getline(std::cin, command, '\n');
	if (!command.compare("EXIT"))
		command_type = EXIT;
	else if (!command.compare("ADD"))
		command_type = ADD;
	else if (!command.compare("SEARCH"))
		command_type = SEARCH;
	else
		command_type = NO_MATCH;
}

int PhoneBook::GetCommandType() { return (command_type); }

void PhoneBook::AddContact()
{
	if (count == PB_SIZE)
	{
		bIsMax = true;
		count = 0;
	}
	contacts[count].SetField(FIRST_NAME);
	contacts[count].SetField(LAST_NAME);
	contacts[count].SetField(NICKNAME);
	contacts[count].SetField(PHONE_NUMBER);
	contacts[count].SetField(DARKEST_SECRET);
	count++;
}

void PhoneBook::SearchContact()
{
	int	idx;
	int	end;
	
	if (!bIsMax && !count)
		std::cout << RED << "PhoneBook is empty." << EOC << std::endl;
	else
	{
		std::cout << PURPLE << '|';
		ApplyFormat("INDEX", false);
		ApplyFormat("FIRST NAME", false);
		ApplyFormat("LAST NAME", false);
		ApplyFormat("NICKNAME", true);
		std::cout << EOC;
		if (bIsMax)
			end = PB_SIZE;
		else
			end = count;
		idx = -1;
		while (++idx < end)
		{
			std::cout << PURPLE << "|         " << idx << '|';
			ApplyFormat(contacts[idx].GetField(FIRST_NAME), false);
			ApplyFormat(contacts[idx].GetField(LAST_NAME), false);
			ApplyFormat(contacts[idx].GetField(NICKNAME), true);
		}
		std::cout << EOC;
		ReadContact(end);
	}
}

void PhoneBook::ApplyFormat(std::string content, bool bIsLast)
{
	int	len;

	len = content.length();
	if (len < 11)
	{
		for (int i = 0; i < 10 - len; i++)
			std::cout << ' ';
		std::cout << content << '|';
	}
	else
		std::cout << content.substr(0, 9) << '.' << '|';
	if (bIsLast)
		std::cout << std::endl;
}

void PhoneBook::ReadContact(int end)
{
	int	idx;

	std::cout << GREEN <<  "Choose INDEX: " << EOC;
	std::cin >> idx;
	if (std::cin.fail())
		std::cout << RED << "Please put in the numbers." << EOC << std::endl;
	else if (idx >= end)
		std::cout << RED << "Index out of range." << EOC << std::endl;
	else
	{
		std::cout << PURPLE << "| Fisrt Name     : " << contacts[idx].GetField(FIRST_NAME)
		<< EOC << std::endl;
		std::cout << PURPLE << "| Last Name      : " << contacts[idx].GetField(LAST_NAME)
		<< EOC << std::endl;
		std::cout << PURPLE << "| Nickname       : " << contacts[idx].GetField(NICKNAME)
		<< EOC << std::endl;
		std::cout << PURPLE << "| Phone Number   : " << contacts[idx].GetField(PHONE_NUMBER)
		<< EOC << std::endl;
		std::cout << PURPLE << "| Darkest Secret : " << contacts[idx].GetField(DARKEST_SECRET)
		<< EOC << std::endl;
	}
	ClearCin();
}
