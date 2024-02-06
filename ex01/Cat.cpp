/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 16:03:12 by azgaoua           #+#    #+#             */
/*   Updated: 2024/02/06 15:39:40 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*------------------------- Orthodox Canonical Form -------------------------*/
Cat::Cat() {
	CatBrain = new Brain();
	type = "Cat";
	std::cout << "\"Cat\" constructor called" << std::endl;
	std::string tab[10] = {
		"",
		"tuna...!",
		"fish...!",
		"",
		"rat...!",
		"sleep...!",
		"",
		"play...!",
		"make sound...!",
		""
	};
	for (unsigned int  i = 0; i < 100; i++)
		CatBrain->ideas[i] = tab[rand() % 10];
}

Cat&		Cat::operator =(const Cat& b) {
	type = b.type;
	std::cout << "\"Cat\" copy assignment operator called" << std::endl;
	return(*this);
}

Cat::Cat(Cat const &src) {
	std::cout << "\"Cat\" copy constructor called" << std::endl;
	*this = src;
}

Cat::~Cat() {
	delete CatBrain;
	std::cout << "\"Cat\" destructor called" << std::endl;
}
/*---------------------------------------------------------------------------*/

/*----------------------- public member functions -----------------------*/
void	Cat::makeSound() const{
	std::cout << "Meow-Meow....!!" << std::endl;
}

Brain&	Cat::getBrain() {
	return(*CatBrain);
}
/*-----------------------------------------------------------------------*/
