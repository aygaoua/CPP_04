/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:27:38 by azgaoua           #+#    #+#             */
/*   Updated: 2024/02/06 20:50:20 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*------------------------- Orthodox Canonical Form -------------------------*/
Brain::Brain() {
	std::cout << "\"Brain\" constructor called" << std::endl;
}

Brain&		Brain::operator =(const Brain& b) {
	std::cout << "\"Brain\" copy assignment operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = b.ideas[i];
	return(*this);
}

Brain::Brain(Brain const &src) {
	std::cout << "\"Brain\" copy constructor called" << std::endl;
	*this = src;
}

Brain::~Brain() {
	std::cout << "\"Brain\" destructor called" << std::endl;
}
/*---------------------------------------------------------------------------*/