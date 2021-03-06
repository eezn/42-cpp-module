/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 13:58:20 by jin-lee           #+#    #+#             */
/*   Updated: 2022/04/15 16:59:42 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main( void ) {

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

	Animal *old_dog = new Dog();
	Animal *new_dog = new Dog();
	old_dog = new_dog;
	
	// for (;;) {}

	system("leaks Animal_01");

	// Brain *b_ptr;
	// printf("%p\n", b_ptr);

	return (0);
}
