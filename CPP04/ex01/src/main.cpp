/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 13:58:20 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/24 20:02:46 by jin-lee          ###   ########.fr       */
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
			std::cout << YELLOW << "Dog[" << i << "] think... "
			<< RED << temp_dog.getBrain()->getIdeas(i)
			<< EOC << std::endl;
		}
		else {
			Cat temp_cat(*(Cat *)animal[i]); // 다운 캐스팅, 복사 생성
			std::cout << YELLOW << "Cat[" << i << "] think... "
			<< RED << temp_cat.getBrain()->getIdeas(i)
			<< EOC << std::endl;
		}
	}

	for (int i = 0; i < 10; i++) {
		delete animal[i];
	}

	// for (;;) {}
}
