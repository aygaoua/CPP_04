/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 16:03:12 by azgaoua           #+#    #+#             */
/*   Updated: 2024/02/04 16:27:33 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*------------------------- Orthodox Canonical Form -------------------------*/
Cat::Cat() {
	type = "Cat";
	std::cout << "\"Cat\" constructor called" << std::endl;
}

Cat&		Cat::operator =(const Cat& b) {
	type = b.type;
	std::cout << "\"Dog\" copy assignment operator called" << std::endl;
	return(*this);
}

Cat::Cat(Cat const &src) {
	std::cout << "\"Cat\" copy constructor called" << std::endl;
	*this = src;
}

Cat::~Cat() {
	std::cout << "\"Cat\" destructor called" << std::endl;
}
/*---------------------------------------------------------------------------*/

/*----------------------- public member functions -----------------------*/
void	Cat::makeSound() const{
	std::cout << "Meow-Meow....!!" << std::endl;
}
/*-----------------------------------------------------------------------*/
