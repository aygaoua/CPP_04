/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:36:56 by azgaoua           #+#    #+#             */
/*   Updated: 2024/02/07 02:39:15 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*------------------------- Orthodox Canonical Form -------------------------*/
Animal::Animal() {
	std::cout << "\"Animal\" constructor called" << std::endl;
}

Animal&		Animal::operator =(const Animal& b) {
	type = b.type;
	std::cout << "\"Animal\" copy assignment operator called" << std::endl;
	return(*this);
}

Animal::Animal(Animal const &src) {
	std::cout << "\"Animal\" copy constructor called" << std::endl;
	*this = src;
}

Animal::~Animal() {
	std::cout << "\"Animal\" destructor called" << std::endl;
}
/*---------------------------------------------------------------------------*/
 

/*----------------------- public member functions -----------------------*/

/* pure virtual function */

std::string	Animal::getType() const{
	return this->type;
}
/*-----------------------------------------------------------------------*/
