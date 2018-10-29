/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 15:46:02 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/31 16:32:05 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 50, 8) {
}

PowerFist::PowerFist(PowerFist const &rhs) {
	*this = rhs;
}

PowerFist::~PowerFist(void) {
}

void	PowerFist::attack() const{
	std::cout<< "* pschhh... SBAM! *" << std::endl;
}
