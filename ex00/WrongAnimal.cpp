/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:48:34 by azgaoua           #+#    #+#             */
/*   Updated: 2024/02/07 16:36:51 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*------------------------- Orthodox Canonical Form -------------------------*/
WrongAnimal::WrongAnimal() {
	type = "WrongAnimal";
	std::cout << "\"WrongAnimal\" constructor called" << std::endl;
}

WrongAnimal&		WrongAnimal::operator =(const WrongAnimal& b) {
	type = b.type;
	std::cout << "\"WrongAnimal\" copy assignment operator called" << std::endl;
	return(*this);
}

WrongAnimal::WrongAnimal(WrongAnimal const &src) {
	std::cout << "\"WrongAnimal\" copy constructor called" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "\"WrongAnimal\" destructor called" << std::endl;
}
/*---------------------------------------------------------------------------*/
 

/*----------------------- public member functions -----------------------*/
void	WrongAnimal::makeSound() const { 
	std::cout << "WrongAnimal making sound!!" << std::endl;
 }
std::string	WrongAnimal::getType() const{
	return type;
}
/*-----------------------------------------------------------------------*/
