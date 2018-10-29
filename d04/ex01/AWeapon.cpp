/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 15:14:40 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/31 15:15:31 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"


AWeapon::AWeapon(void)  {
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _APCost(apcost), _damage(damage) {
}

AWeapon::AWeapon(AWeapon const &rhs) {
		*this = rhs;
}

AWeapon::~AWeapon(void) {
}

AWeapon		& AWeapon::operator=(AWeapon const &rhs) {
		this->_name = rhs.getName();
		this->_APCost= rhs.getAPCost();
		this->_damage = rhs.getDamage();
		return (*this);
}

int 		AWeapon::getAPCost( void ) const {
	return _APCost;
}

int 		AWeapon::getDamage( void ) const {
	return _damage;
}

std::string	 const & AWeapon::getName( void ) const {
	return _name;
}

