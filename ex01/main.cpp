/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 11:42:16 by azgaoua           #+#    #+#             */
/*   Updated: 2024/02/07 02:26:09 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"

void vv() {
	std::system("leaks run_ex01");
}

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "<<------------------------- start (ex01) ------------------------->>" << std::endl;
	
	// atexit(vv);
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	
	Animal* a[4];
	for (int i = 0; i < 2; i++)
		a[i] = new Cat();
	for (int i = 2; i < 4; i++)
		a[i] = new Dog();
	for (int i = 0; i < 4; i++)
		std::cout << a[i]->getType() << " " << std::endl;
	for (int i = 0; i < 4; i++)
		a[i]->makeSound();
	for (int i = 0; i < 4; i++)
		delete a[i];
	std::cout << "<<------------------------- test deep copy ------------------------->>" << std::endl;
	Dog basic;
	{
		Dog tmp = basic;
	}
	delete meta;
	delete j;
	delete i;

	return 0;
}