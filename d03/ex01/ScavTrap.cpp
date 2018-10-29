/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 14:03:48 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/30 14:04:51 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap(void) : _name("ScavTrap Unknow") {
	std::cout << "Default constructor called Your name is " << _name << std::endl;
	_initLevel(1);
}


ScavTrap::ScavTrap(std::string name) : _name(name) {
	std::cout << "wellcome  " << _name << std::endl;
	_initLevel(1);
}

ScavTrap::ScavTrap(ScavTrap const &scav) {
	*this = scav;
	std::cout << "<scavTrap> Copy of  " << this->_name << " !" << std::endl;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "Bye " << _name << " See you later" << std::endl;
}

ScavTrap		& ScavTrap::operator=(ScavTrap const &rhs) {
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

void	ScavTrap::_initLevel(int level) {
	_level = level;
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;

}

int 		ScavTrap::getLevel( void ) const {
	return _level;
}
std::string	ScavTrap::getName( void ) const {
	return _name;
}
void		ScavTrap::displayScore( void ) const{
	std::cout <<  _name << " reached level " << _level << " with : " << std::endl;
	std::cout << " Hit points            : "	<<	_hitPoints <<  std::endl;
	std::cout << " Max hit points        : "	<<	_maxHitPoints <<  std::endl;
	std::cout << " Energy points         : "	<<	_energyPoints <<  std::endl;
	std::cout << " Max energy points     : "	<<	_maxEnergyPoints <<  std::endl;
	std::cout << " Melee attack damage   : "	<<	_meleeAttackDamage <<  std::endl;
	std::cout << " Ranged attack damage  : "	<<	_rangedAttackDamage <<  std::endl;
	std::cout << " Armor damage reduction: "	<<	_armorDamageReduction <<  std::endl;
}


void		ScavTrap::rangedAttack(std::string const & target){
	std::cout << "FR4G-TP ScavTrap <" << _name  << "> attacks <"  << target << "> at range, causing <"
			  << _rangedAttackDamage << "> points of damage !"  << std::endl;
}
void		ScavTrap::meleeAttack(std::string const & target){
	std::cout << "FR4G-TP ScavTrap  <" << _name  << "> attacks <"  << target << "> at melee, causing <"
			  << _rangedAttackDamage << "> points of damage !"  << std::endl;
}

void		ScavTrap::takeDamage(unsigned int amount){
	if (amount < _armorDamageReduction)
	{
		std::cout << "<ScavTrap> Take Domage : nothing to do "  <<  std::endl;
		return;
	}
	amount -= _armorDamageReduction;
	_hitPoints = (_hitPoints <= amount) ? 0 : _hitPoints - amount;
	std::cout << "<ScavTrap> Hit points  after damage: " << _hitPoints <<  std::endl;
}
void		ScavTrap::beRepaired(unsigned int amount){

	if (_energyPoints == 0){
	std::cout << "<ScavTrap> No more energy to repared "  <<  std::endl;
	return ;
	}
	if (_hitPoints == _maxHitPoints){
			std::cout << "<ScavTrap>  Nothing to repared "  <<  std::endl;
	return ;
	}
	amount = (amount >= _energyPoints) ? _energyPoints : amount;
	amount = (amount >= (_maxHitPoints - _hitPoints)) ? (_maxHitPoints - _hitPoints) : amount;
	_energyPoints  -= amount;
	_hitPoints += amount;
	std::cout << "the <ScavTrap> reparation costs "	<<	amount << " you have " << _hitPoints 
			  << " hitpoint and your energy level is " <<  _energyPoints << std::endl;

}

void		ScavTrap::challengeNewcomer(void) const {
	std::string	tabname[] = {" Go to 42 school ", "learn to swin",
		"Impress the corrector", " Validate D03", "Survive "};
	int 		i ;
	srand(time(NULL));
	i = rand() % 5;
	std::cout << "<ScavTrap> Your next challenge is " << tabname[i] << std::endl;

}


