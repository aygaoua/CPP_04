/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 11:42:16 by azgaoua           #+#    #+#             */
/*   Updated: 2024/02/07 16:07:56 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "<<------------------------- start (ex01) ------------------------->>" << std::endl;
	
	// atexit(vv);
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); /* will output the cat sound! */
	j->makeSound();
	meta->makeSound();
	std::cout << "<<------------------------ tab of objects ------------------------>>" << std::endl;
	Animal* a[4];
	for (int i = 0; i < 2; i++)
		a[i] = new Cat();
	for (int i = 2; i < 4; i++)
		a[i] = new Dog();
	for (int i = 0; i < 4; i++)
		std::cout << a[i]->getType() << " " << std::endl;
	for (int i = 0; i < 4; i++)
		a[i]->makeSound();
	std::cout << "<<------------------------ END ------------------------>>" << std::endl;
	for (int i = 0; i < 4; i++)
		delete a[i];
	delete meta;
	delete j;
	delete i;

	return 0;
}