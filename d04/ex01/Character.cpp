/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 18:06:09 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/31 18:06:35 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Character.hpp"


Character::Character(void) : _name("Default"), _AP(40),_weapon(0) {
}

Character::Character(std::string name) : _name(name), _AP(40),_weapon(0) {
}

Character::Character(Character const &rhs) {
		*this = rhs;
}

Character::~Character(void) {
}

Character		& Character::operator=(Character const &rhs) {
		this->_name = rhs.getName();
		this->_AP = rhs.getAP();
		this->_weapon = rhs.getWeapon();
		return (*this);
}

int 		Character::getAP( void ) const {
		return _AP;
}

std::string	const &	Character::getName( void ) const {
		return _name;
}

AWeapon *	Character::getWeapon( void )const {
		return _weapon;
}
void 		Character::recoverAP(void){
		_AP = (_AP >= 30) ? 40 : _AP + 10;
}
void 		Character::equip(AWeapon * weapon){
		_weapon = weapon;
}
void 		Character::attack(Enemy * enemy){

	if (!_weapon)
		return;
	if (_AP >= _weapon->getAPCost())
		return;
	_AP -= _weapon->getAPCost();
	std::cout << _name << " attacks " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
	_weapon->attack();
	enemy->takeDamage(_weapon->getDamage());
	if (enemy->getHP() == 0)
			delete enemy;
	}


std::ostream & operator<<( std::ostream & o, Character const & rhs) {
		o << rhs.getName() << " has " << rhs.getAP() << " AP and ";
		if(rhs.getWeapon())
			o << "wields a " << (rhs.getWeapon())->getName();
		else
			o << "is unarmed";
		o << std::endl;
		return o;
}

