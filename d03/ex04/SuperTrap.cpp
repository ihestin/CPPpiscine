/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 18:47:33 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/30 18:47:48 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"


SuperTrap::SuperTrap(void) : ClapTrap("SuperTrap Unknow") {
	std::cout << "Super Default constructor called Your name is " << _name << std::endl;
	 _initLevel(1);
}

SuperTrap::SuperTrap(std::string name) : ClapTrap(name) {
	std::cout << "<SuperTrap>: welcome  " << _name << std::endl;
	 _initLevel(1);
}

SuperTrap::SuperTrap(SuperTrap const &scav) {
	*this = scav;
	std::cout << "<SuperTrap> Copy of  " << this->_name << " !" << std::endl;
}

SuperTrap::~SuperTrap(void) {
	std::cout << "<SuperTrap> Bye " << _name << " See you later" << std::endl;
}

SuperTrap		& SuperTrap::operator=(SuperTrap const &rhs) {
	this->_level = rhs._level;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_maxHitPoints = rhs._maxHitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_maxEnergyPoints = rhs._maxEnergyPoints;
	this->_meleeAttackDamage = rhs._meleeAttackDamage;
	this->_rangedAttackDamage = rhs._rangedAttackDamage;
	this->_armorDamageReduction = rhs._armorDamageReduction;
	return (*this);
}
void	SuperTrap::_initLevel(int level) {
	FragTrap	tmp;
	_level = level;
	_hitPoints = tmp.getHitPoints();
	_maxHitPoints = tmp.getMaxHitPoints();
	_rangedAttackDamage = tmp.getRangedAttackDamage();
	_armorDamageReduction =tmp.getArmorDamageReduction();

}

void		SuperTrap::rangedAttack(std::string const & target){
	FragTrap::meleeAttack(target);
}
void		SuperTrap::meleeAttack(std::string const & target) const {
	NinjaTrap::meleeAttack(target);
}




