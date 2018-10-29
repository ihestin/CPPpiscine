/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 15:43:55 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/31 15:44:24 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21) {
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &rhs) {
	*this = rhs;
}

PlasmaRifle::~PlasmaRifle(void) {
}

void	PlasmaRifle::attack() const{
	std::cout<< "* piouuu piouuu piouuu *" << std::endl;
}
