/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 14:09:41 by azgaoua           #+#    #+#             */
/*   Updated: 2024/02/05 17:17:05 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*------------------------- Orthodox Canonical Form -------------------------*/
Dog::Dog() {
	DogBrain = new Brain();
	type = "Dog";
	std::cout << "\"Dog\" constructor called" << std::endl;
}

Dog&		Dog::operator =(const Dog& b) {
	type = b.type;
	std::cout << "\"Dog\" copy assignment operator called" << std::endl;
	return(*this);
}

Dog::Dog(Dog const &src) {
	std::cout << "\"Dog\" copy constructor called" << std::endl;
	*this = src;
}

Dog::~Dog() {
	delete DogBrain;
	std::cout << "\"Dog\" destructor called" << std::endl;
}
/*---------------------------------------------------------------------------*/

/*----------------------- public member functions -----------------------*/
void	Dog::makeSound() const{
	std::cout << "Hoaw-Hoaw....!!" << std::endl;
}
/*-----------------------------------------------------------------------*/
