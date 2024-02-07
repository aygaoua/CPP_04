/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:48:46 by azgaoua           #+#    #+#             */
/*   Updated: 2024/02/07 16:36:37 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*------------------------- Orthodox Canonical Form -------------------------*/
WrongCat::WrongCat() {
	type = "WrongCat";
	std::cout << "\"WrongCat\" constructor called" << std::endl;
}

WrongCat&		WrongCat::operator =(const WrongCat& b) {
	type = b.type;
	std::cout << "\"WrongCat\" copy assignment operator called" << std::endl;
	return(*this);
}

WrongCat::WrongCat(WrongCat const &src) {
	std::cout << "\"WrongCat\" copy constructor called" << std::endl;
	*this = src;
}

WrongCat::~WrongCat() {
	std::cout << "\"WrongCat\" destructor called" << std::endl;
}
/*---------------------------------------------------------------------------*/

/*----------------------- public member functions -----------------------*/
void	WrongCat::makeSound() const{
	std::cout << "<WRONG>Meow-Meow....!!" << std::endl;
}
/*-----------------------------------------------------------------------*/
