/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 13:58:20 by jin-lee           #+#    #+#             */
/*   Updated: 2022/03/05 12:18:03 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main( void ) {

	// const Animal instance; // 추상클래스 인스턴스화 불가능
	const Animal *animal[6];

	for (int i = 0; i < 6; i++) {
		if (i % 2 == 0)
			animal[i] = new Dog();
		else
			animal[i] = new Cat();
	}

	for (int i = 0; i < 6; i++) {
		if (i % 2 == 0) {
			std::cout << std::endl;
			Dog temp_dog(*((Dog *)animal[i])); // 다운 캐스팅, 복사 생성
			std::cout
			<< GREEN << temp_dog.getType() << "[" << i << "]:" << YELLOW;
			for (int j = 0; j < CAPACITY; j++)
				std::cout << " " << temp_dog.getBrain()->getIdea(j);
			std::cout << EOC << std::endl;
		}
		else {
			std::cout << std::endl;
			Cat temp_cat(*((Cat *)animal[i])); // 다운 캐스팅, 복사 생성
			std::cout
			<< PURPLE << temp_cat.getType() << "[" << i << "]:" << YELLOW;
			for (int j = 0; j < CAPACITY; j++)
				std::cout << " " << temp_cat.getBrain()->getIdea(j);
			std::cout << EOC << std::endl;
		}
	}

	for (int i = 0; i < 6; i++)
		delete animal[i];
	
	// for (;;) {}

	return (0);
}
