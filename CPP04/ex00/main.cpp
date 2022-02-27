/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 13:58:20 by jin-lee           #+#    #+#             */
/*   Updated: 2022/02/24 15:26:23 by jin-lee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main( void ) {

	{
		const Animal *animal = new Animal();
		const Animal *cat = new Cat();
		const Animal *dog = new Dog();

		std::cout << cat->getType() << std::endl;
		std::cout << dog->getType() << std::endl;

		cat->makeSound();
		dog->makeSound();
		animal->makeSound();

		delete animal;
		delete cat;
		delete dog;
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
