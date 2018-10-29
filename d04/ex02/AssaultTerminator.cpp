/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 21:13:26 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/31 21:13:31 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "AssaultTerminator.hpp"


AssaultTerminator::AssaultTerminator(void)  {
		std::cout << "* teleports from space *" << std::endl;
}


AssaultTerminator::AssaultTerminator(AssaultTerminator const &rhs) {
		*this = rhs;
			
}

AssaultTerminator::~AssaultTerminator(void) {
		std::cout << "I'll be back ..." << std::endl;
}

AssaultTerminator		& AssaultTerminator::operator=(AssaultTerminator const &rhs) {
	(void) rhs ;
	return (*this);
}

void					AssaultTerminator::battleCry() const {
	std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}

void					AssaultTerminator::rangedAttack() const {
	std::cout << "* does nothing *" << std::endl;
}

void					AssaultTerminator::meleeAttack() const {
	std::cout << "* attacks with chainfists *" << std::endl;
}

ISpaceMarine			*AssaultTerminator::clone() const {
	ISpaceMarine		*clone = new AssaultTerminator(*this);
	return (clone);
}

