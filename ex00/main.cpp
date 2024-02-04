/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 11:42:16 by azgaoua           #+#    #+#             */
/*   Updated: 2024/02/04 16:33:35 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
	
return 0;
}


// int main () {
// 	std::cout << "<<-------------------------- Dog -------------------------->>" \
// 				<< std::endl;
// 	Dog a;
// 	a.makeSound();
// 	std::cout << "<<-------------------------- Cat -------------------------->>" \
// 				<< std::endl;
// 	Cat b;
// 	b.makeSound();
// 	std::cout << "<<-------------------------- END -------------------------->>" \
// 				<< std::endl;
// 	return (0);
// }