/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:27:55 by azgaoua           #+#    #+#             */
/*   Updated: 2024/02/05 17:21:56 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>


class Brain {
	private:
		std::string ideas[100];
	
	public:
	/*----------------------- Orthodox Canonical Form -----------------------*/
		Brain			();
		Brain			(Brain const& src);
		Brain& 		operator=(const Brain& b);
		~Brain		();
	/*-----------------------------------------------------------------------*/

};


#endif