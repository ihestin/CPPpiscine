/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 20:55:41 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/31 20:56:03 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"


TacticalMarine::TacticalMarine(void)  {
		std::cout << "Tactical Marine ready for battle" << std::endl;
}


TacticalMarine::TacticalMarine(TacticalMarine const &rhs) {
		*this = rhs;
			
}

TacticalMarine::~TacticalMarine(void) {
		std::cout << "Aaargh ..." << std::endl;
}

TacticalMarine		& TacticalMarine::operator=(TacticalMarine const &rhs) {
	(void) rhs ;
	return (*this);
}

void					TacticalMarine::battleCry() const {
	std::cout << "For the holy PLOT !" << std::endl;
}

void					TacticalMarine::rangedAttack() const {
	std::cout << "* attacks with bolter *" << std::endl;
}

void					TacticalMarine::meleeAttack() const {
	std::cout << "* attacks with chainsword *" << std::endl;
}

ISpaceMarine			*TacticalMarine::clone() const {
	ISpaceMarine		*clone = new TacticalMarine(*this);
	return (clone);
}
