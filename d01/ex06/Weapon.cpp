/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 19:10:57 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/28 19:11:05 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str) : _type(str) {
}

Weapon::~Weapon(void) {
}

std::string		Weapon::getType() const {
	return _type;
}

void			Weapon::setType(std::string str){
	_type = str;
}
