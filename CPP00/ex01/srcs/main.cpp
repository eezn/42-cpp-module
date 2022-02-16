/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:37:10 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/17 02:57:00 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook	pb;
	int			type;

	pb.SetDefault();
	pb.WarningMesssage();
	while (true)
	{
		pb.PromptInCommand();
		type = pb.GetCommandType();
		if (type == EXIT)
			break ;
		else if (type == ADD)
			pb.AddContact();
		else if (type == SEARCH)
			pb.SearchContact();
		else
			continue ;
	}
	return (EXIT_SUCCESS);
}
