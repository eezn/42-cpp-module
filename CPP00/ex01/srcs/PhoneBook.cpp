/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 12:50:46 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/23 14:44:25 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ) {}
PhoneBook::~PhoneBook( void ) {}

void PhoneBook::warningMesssage( void ) {

	std::cout << RED
	<< "(If you type 'CTRL + D', something surprising might happen?)"
	<< EOC << std::endl;
}

void PhoneBook::setDefault( void ) {

	count = 0;
	bIsMax = false;
}

void PhoneBook::clear( void ) {

	std::cin.clear();
	std::cin.ignore(BUFF_SIZE, '\n');
}

void PhoneBook::promptInCommand( void ) {

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

int PhoneBook::getCommandType( void ) { return (command_type); }

void PhoneBook::addContact( void ) {

	if (count == PB_SIZE) {
		bIsMax = true;
		count = 0;
	}
	contacts[count].setField(FIRST_NAME);
	contacts[count].setField(LAST_NAME);
	contacts[count].setField(NICKNAME);
	contacts[count].setField(PHONE_NUMBER);
	contacts[count].setField(DARKEST_SECRET);
	count++;
}

void PhoneBook::searchContact( void ) {

	int	idx;
	int	end;
	
	if (!bIsMax && !count)
		std::cout << RED << "PhoneBook is empty." << EOC << std::endl;
	else {
		std::cout << PURPLE << '|';
		applyFormat("INDEX", false);
		applyFormat("FIRST NAME", false);
		applyFormat("LAST NAME", false);
		applyFormat("NICKNAME", true);
		std::cout << EOC;
		if (bIsMax)
			end = PB_SIZE;
		else
			end = count;
		idx = -1;
		while (++idx < end) {
			std::cout << PURPLE << "|         " << idx << '|';
			applyFormat(contacts[idx].getField(FIRST_NAME), false);
			applyFormat(contacts[idx].getField(LAST_NAME), false);
			applyFormat(contacts[idx].getField(NICKNAME), true);
		}
		std::cout << EOC;
		readContact(end);
	}
}

void PhoneBook::applyFormat( std::string content, bool bIsLast ) {

	int	len;

	len = content.length();
	if (len < 11) {
		for (int i = 0; i < 10 - len; i++)
			std::cout << ' ';
		std::cout << content << '|';
	}
	else
		std::cout << content.substr(0, 9) << '.' << '|';
	if (bIsLast)
		std::cout << std::endl;
}

void PhoneBook::readContact( int end ) {

	int	idx;

	std::cout << GREEN <<  "Choose INDEX: " << EOC;
	std::cin >> idx;
	if (std::cin.fail())
		std::cout << RED << "Please put in the numbers." << EOC << std::endl;
	else if (idx >= end)
		std::cout << RED << "Index out of range." << EOC << std::endl;
	else {
		std::cout << PURPLE << "| Fisrt Name     : " << contacts[idx].getField(FIRST_NAME)
		<< EOC << std::endl;
		std::cout << PURPLE << "| Last Name      : " << contacts[idx].getField(LAST_NAME)
		<< EOC << std::endl;
		std::cout << PURPLE << "| Nickname       : " << contacts[idx].getField(NICKNAME)
		<< EOC << std::endl;
		std::cout << PURPLE << "| Phone Number   : " << contacts[idx].getField(PHONE_NUMBER)
		<< EOC << std::endl;
		std::cout << PURPLE << "| Darkest Secret : " << contacts[idx].getField(DARKEST_SECRET)
		<< EOC << std::endl;
	}
	clear();
}
