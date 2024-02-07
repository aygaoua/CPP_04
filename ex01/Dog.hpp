/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 14:09:38 by azgaoua           #+#    #+#             */
/*   Updated: 2024/02/06 21:42:14 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

#include <iostream>
#include <string>

class Dog : public Animal{
	private:
		Brain*		DogBrain;

	public:
	/*----------------------- Orthodox Canonical Form -----------------------*/
		Dog			();
		Dog			(Dog const& src);
		Dog& 		operator=(const Dog& b);
		~Dog		();
	/*-----------------------------------------------------------------------*/

	/*----------------------- public member functions -----------------------*/
		void		makeSound() const;
		Brain*		getBrain();
	/*-----------------------------------------------------------------------*/
};



#endif