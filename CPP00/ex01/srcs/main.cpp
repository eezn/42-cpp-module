/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:37:10 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/18 05:09:53 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main( void ) {

	PhoneBook	pb;
	int			type;

	pb.setDefault();
	pb.warningMesssage();
	while (true) {
		pb.promptInCommand();
		type = pb.getCommandType();
		if (type == EXIT)
			break ;
		else if (type == ADD)
			pb.addContact();
		else if (type == SEARCH)
			pb.searchContact();
		else
			continue ;
	}

	return (0);
}
