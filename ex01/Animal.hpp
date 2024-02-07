/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:37:50 by azgaoua           #+#    #+#             */
/*   Updated: 2024/02/07 16:38:12 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_HPP
#define	ANIMAL_HPP
#include <string>
#include <iostream>
#include "Brain.hpp"


class Animal
{
	protected:
		std::string		type;
	public:
	/*----------------------- Orthodox Canonical Form -----------------------*/
		Animal		();
		Animal		(Animal const & src);
		Animal&		operator =(const Animal& b);
		virtual 	~Animal();
	/*-----------------------------------------------------------------------*/

	/*----------------------- public member functions -----------------------*/
		virtual void		makeSound() const;
		std::string			getType() const;
	/*-----------------------------------------------------------------------*/
};

#endif