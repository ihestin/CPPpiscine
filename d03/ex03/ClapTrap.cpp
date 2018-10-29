/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 15:14:40 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/30 15:14:44 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap(void) : _name("ClapTrap Unknow") {
	std::cout << "<ClapTrap>Default constructor called Your name is " << _name << std::endl;
	this->_initLevel(1);
}

ClapTrap::ClapTrap(std::string name) : _name(name) {
	std::cout << "<ClapTrap>welcome  " << _name << std::endl;
	this->_initLevel(1);
}

ClapTrap::ClapTrap(ClapTrap const &clap) {
	*this = clap;
	std::cout << "<clapTrap> Copy of  " << this->_name << " !" << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "<ClapTrap>  Bye " << _name << " See you later" << std::endl;
}

ClapTrap		& ClapTrap::operator=(ClapTrap const &rhs) {
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

void	ClapTrap::_initLevel(int level) {
	_level = level;
	_hitPoints = 201;
	_maxHitPoints = 201;
	_energyPoints = 201;
	_maxEnergyPoints = 201;
	_meleeAttackDamage = 31;
	_rangedAttackDamage = 101;
	_armorDamageReduction = 23;

}

int 		ClapTrap::getLevel( void ) const {
	return _level;
}
std::string	ClapTrap::getName( void ) const {
	return _name;
}
void		ClapTrap::displayScore( void ) const{
	std::cout <<  _name << " reached level " << _level << " with : " << std::endl;
	std::cout << " Hit points            : "	<<	_hitPoints <<  std::endl;
	std::cout << " Max hit points        : "	<<	_maxHitPoints <<  std::endl;
	std::cout << " Energy points         : "	<<	_energyPoints <<  std::endl;
	std::cout << " Max energy points     : "	<<	_maxEnergyPoints <<  std::endl;
	std::cout << " Melee attack damage   : "	<<	_meleeAttackDamage <<  std::endl;
	std::cout << " Ranged attack damage  : "	<<	_rangedAttackDamage <<  std::endl;
	std::cout << " Armor damage reduction: "	<<	_armorDamageReduction <<  std::endl;
}


void		ClapTrap::rangedAttack(std::string const & target){
	std::cout << "FR4G-TP ClapTrap <" << _name  << "> attacks <"  << target << "> at range, causing <"
			  << _rangedAttackDamage << "> points of damage !"  << std::endl;
}
void		ClapTrap::meleeAttack(std::string const & target) const {
	std::cout << "FR4G-TP ClapTrap  <" << _name  << "> attacks <"  << target << "> at melee, causing <"
			  << _rangedAttackDamage << "> points of damage !"  << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount){
	if (amount < _armorDamageReduction)
	{
		std::cout << "<ClapTrap> Take Domage : nothing to do "  <<  std::endl;
		return;
	}
	amount -= _armorDamageReduction;
	_hitPoints = (_hitPoints <= amount) ? 0 : _hitPoints - amount;
	std::cout << "<ClapTrap> Hit points  after damage: " << _hitPoints <<  std::endl;
}
void		ClapTrap::beRepaired(unsigned int amount){

	if (_energyPoints == 0){
	std::cout << "<ClapTrap> No more energy to repared "  <<  std::endl;
	return ;
	}
	if (_hitPoints == _maxHitPoints){
			std::cout << "<ClapTrap>  Nothing to repared "  <<  std::endl;
	return ;
	}
	amount = (amount >= _energyPoints) ? _energyPoints : amount;
	amount = (amount >= (_maxHitPoints - _hitPoints)) ? (_maxHitPoints - _hitPoints) : amount;
	_energyPoints  -= amount;
	_hitPoints += amount;
	std::cout << "the <ClapTrap> reparation costs "	<<	amount << " you have " << _hitPoints 
			  << " hitpoint and your energy level is " <<  _energyPoints << std::endl;

}


