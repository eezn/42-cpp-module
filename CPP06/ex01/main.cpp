/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 02:21:19 by jin-lee           #+#    #+#             */
/*   Updated: 2022/03/06 15:32:54 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Data.hpp>

int main( void ) {

	Data *data = new Data(20, "jin-lee");

	std::cout << data->getNum() << std::endl;
	std::cout << data->getStr() << std::endl;
	
	uintptr_t u_ptr = serialize(data);
	std::cout << u_ptr << std::endl;

	Data *temp = deserialize(u_ptr);
	std::cout << temp << std::endl;

	std::cout << temp->getNum() << std::endl;
	std::cout << temp->getStr() << std::endl;

	delete data;

	return (0);
}