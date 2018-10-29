/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 16:52:52 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/30 16:53:08 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"


NinjaTrap::NinjaTrap(void) : ClapTrap("NinjaTrap Unknow") {
	std::cout << "Scav Default constructor called Your name is " << _name << std::endl;
	_initLevel(1);
}


NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name) {
	std::cout << "<NinjaTrap>: welcome  " << _name << std::endl;
	_initLevel(1);
}

NinjaTrap::NinjaTrap(NinjaTrap const &scav) : ClapTrap() {
	*this = scav;
	std::cout << "<NinjaTrap> Copy of  " << this->_name << " !" << std::endl;
}

NinjaTrap::~NinjaTrap(void) {
	std::cout << "Bye " << _name << " See you later" << std::endl;
}

void	NinjaTrap::_initLevel(int level) {
	_level = level;
	_hitPoints = 60;
	_maxHitPoints = 60;
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 5;
	_armorDamageReduction = 0;

}

NinjaTrap		& NinjaTrap::operator=(NinjaTrap const &rhs) {
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

void		NinjaTrap::rangedAttack(std::string const & target){
	std::cout << "FR4G-TP NinjaTrap <" << _name  << "> attacks <"  << target << "> at range, causing <"
			  << _rangedAttackDamage << "> points of damage !"  << std::endl;
}
void		NinjaTrap::meleeAttack(std::string const & target) const {
	std::cout << "FR4G-TP NinjaTrap  <" << _name  << "> attacks <"  << target << "> at melee, causing <"
			  << _rangedAttackDamage << "> points of damage !"  << std::endl;
}

void		NinjaTrap::ninjaShoebox(NinjaTrap const &Attack ){
	Attack.meleeAttack("target Scav");
	return;
}
void		NinjaTrap::ninjaShoebox(ClapTrap const &Attack ){
	Attack.meleeAttack("target Scav");
	return;
}
void		NinjaTrap::ninjaShoebox(FragTrap const &Attack ){
	Attack.meleeAttack("target Scav");
	return;
}
void		NinjaTrap::ninjaShoebox(ScavTrap const &Attack ){
	Attack.meleeAttack("target Frag");
	return;
}


