/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 19:11:43 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/28 19:11:48 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name (name) {
	return;
}

HumanB::~HumanB(void) {
	return;
}

void	HumanB::attack(void) const {
	std::cout << _name << " attacks with his " << _wp->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& wp){
	_wp = &wp;
}

