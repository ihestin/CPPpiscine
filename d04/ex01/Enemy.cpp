/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 16:49:17 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/31 16:49:20 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"


Enemy::Enemy(void)  {
}

Enemy::Enemy(int hp, std::string const & type) : _HP(hp), _type(type) {
}

Enemy::Enemy(Enemy const &rhs) {
		*this = rhs;
}

Enemy::~Enemy(void) {
}

Enemy		& Enemy::operator=(Enemy const &rhs) {
		this->_HP = rhs.getHP();
		this->_type = rhs.getType();
		return (*this);
}

int 		Enemy::getHP( void ) const {
	return _HP;
}

std::string	 const & Enemy::getType( void ) const {
	return _type;
}

void 		Enemy::takeDamage(int dam)  {
	if (this->_HP > 0)
		this->_HP -= dam;
}

