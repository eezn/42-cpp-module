/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 13:58:20 by jin-lee           #+#    #+#             */
/*   Updated: 2022/03/05 01:04:17 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main( void ) {

	{
		const Animal *meta = new Animal();
		const Animal *c = new Cat();
		const Animal *d = new Dog();

		std::cout << c->getType() << std::endl;
		std::cout << d->getType() << std::endl;

		c->makeSound();
		d->makeSound();
		meta->makeSound();
		// d->Animal::makeSound();	// 정적 바인딩

		delete meta;
		delete c;
		delete d;
	}

	std::cout << std::endl;
	{
		const WrongAnimal *wrong_animal = new WrongAnimal();
		const WrongAnimal *wrong_cat = new WrongCat();

		std::cout << wrong_cat->getType() << std::endl;

		wrong_cat->makeSound();
		wrong_animal->makeSound();

		delete wrong_animal;
		delete wrong_cat;
	}
}
