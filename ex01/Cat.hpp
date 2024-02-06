/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 16:03:25 by azgaoua           #+#    #+#             */
/*   Updated: 2024/02/06 15:31:00 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP

#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Cat : public Animal {
	private:
		Brain* 	CatBrain;

	public:
	/*----------------------- Orthodox Canonical Form -----------------------*/
		Cat			();
		Cat			(Cat const& src);
		Cat& 		operator=(const Cat& b);
		~Cat		();
	/*-----------------------------------------------------------------------*/

	/*----------------------- public member functions -----------------------*/
		void		makeSound() const;
		Brain&		getBrain();
	/*-----------------------------------------------------------------------*/
};

#endif
