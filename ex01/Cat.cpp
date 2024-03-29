/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 16:03:12 by azgaoua           #+#    #+#             */
/*   Updated: 2024/02/07 16:20:45 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*------------------------- Orthodox Canonical Form -------------------------*/
Cat::Cat() {
	CatBrain = new Brain();
	type = "Cat";
	std::cout << "\"Cat\" constructor called" << std::endl;
}

Cat&		Cat::operator =(const Cat& b) {
	type = b.type;
	delete CatBrain;
	CatBrain = new Brain(*b.CatBrain);
	std::cout << "\"Cat\" copy assignment operator called" << std::endl;
	return(*this);
}

Cat::Cat(Cat const &src) {
	CatBrain = NULL;
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
/*-----------------------------------------------------------------------*/
