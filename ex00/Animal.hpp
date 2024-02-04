/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:37:50 by azgaoua           #+#    #+#             */
/*   Updated: 2024/02/04 12:56:01 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_HPP
#define	ANIMAL_HPP
#include <string>
#include <iostream>


class Animal
{
	protected:
		std::string		type;
	public:
	/*----------------------- Orthodox Canonical Form -----------------------*/
		Animal		();
		Animal		(Animal const & src);
		Animal&		operator =(const Animal& b);
		~Animal		();
	/*-----------------------------------------------------------------------*/

	/*----------------------- public member functions -----------------------*/
		void		makeSound();
	/*-----------------------------------------------------------------------*/
};

#endif