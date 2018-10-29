/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 14:08:33 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/31 14:08:38 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_H
# define SORCERER_H

# include <iostream>
#include "Victim.hpp"
#include "Peon.hpp"

class Sorcerer {

	private:
		std::string 	_name; 
		std::string 	_title; 

	protected:


	public:
		Sorcerer(void);
		Sorcerer(std::string name,std::string title);
		Sorcerer(Sorcerer const & rhs);
		~Sorcerer(void);

		Sorcerer  		&operator=(Sorcerer const &rhs);
		std::string		getName( void ) const;
		std::string		getTitle( void ) const;

		void			polymorph(Victim const & vct);
		void			polymorph(Peon const & peon);

};

std::ostream & operator<<( std::ostream & o, Sorcerer const & rhs);

#endif
