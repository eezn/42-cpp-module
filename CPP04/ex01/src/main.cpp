/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 13:58:20 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/24 21:00:28 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main( void ) {

	const Animal *animal[10];

	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0)
			animal[i] = new Dog(); // 업 캐스팅
		else
			animal[i] = new Cat(); // 업 캐스팅
	}

	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0) {
			Dog temp_dog(*(Dog *)animal[i]); // 다운 캐스팅, 복사 생성
			std::cout
			<< GREEN << temp_dog.getType() << "[" << i << "]'s Brain[0]: "
			<< RED << temp_dog.getBrain()->getIdea(0)
			<< EOC << std::endl;
		}
		else {
			Cat temp_cat(*(Cat *)animal[i]); // 다운 캐스팅, 복사 생성
			std::cout
			<< CYAN << temp_cat.getType() << "[" << i << "]'s Brain[0]: "
			<< RED << temp_cat.getBrain()->getIdea(0)
			<< EOC << std::endl;
		}
	}

	for (int i = 0; i < 10; i++) {
		delete animal[i];
	}
	
	system("leaks Animal_01");
}
