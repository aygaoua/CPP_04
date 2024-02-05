/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:48:39 by azgaoua           #+#    #+#             */
/*   Updated: 2024/02/05 16:18:00 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
	protected:
		std::string		type;

	public:
	/*----------------------- Orthodox Canonical Form -----------------------*/
		WrongAnimal		();
		WrongAnimal		(WrongAnimal const & src);
		WrongAnimal&		operator =(const WrongAnimal& b);
		~WrongAnimal		();
	/*-----------------------------------------------------------------------*/

	/*----------------------- public member functions -----------------------*/
		void		makeSound() const;
		std::string		getType() const;
	/*-----------------------------------------------------------------------*/
};

#endif
