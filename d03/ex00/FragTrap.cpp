/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 18:31:09 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/29 18:31:17 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

const int 		FragTrap::_vaulthunterCosts = 25;

FragTrap::FragTrap(void) : _name("RRRR Unknow") {
	std::cout << "Default constructor called Your name is " << _name << std::endl;
	_initLevel(1);
}


FragTrap::FragTrap(std::string name) : _name(name) {
	std::cout << "wellcome  " << _name << std::endl;
	_initLevel(1);
}

FragTrap::FragTrap(FragTrap const &frag)
{
	*this = frag;
	std::cout << "<fragTrap> Copy of  " << this->_name << " !" << std::endl;
}

FragTrap::~FragTrap(void) {
	std::cout << "Bye " << _name << " See you later" << std::endl;
}

FragTrap		& FragTrap::operator=(FragTrap const &rhs)
{
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

void	FragTrap::_initLevel(int level) {
	_level = level;
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;

}

int 		FragTrap::getLevel( void ) const {
	return _level;
}
std::string	FragTrap::getName( void ) const {
	return _name;
}
void		FragTrap::displayScore( void ) const{
	std::cout <<  _name << " reached level " << _level << " with : " << std::endl;
	std::cout << " Hit points            : "	<<	_hitPoints <<  std::endl;
	std::cout << " Max hit points        : "	<<	_maxHitPoints <<  std::endl;
	std::cout << " Energy points         : "	<<	_energyPoints <<  std::endl;
	std::cout << " Max energy points     : "	<<	_maxEnergyPoints <<  std::endl;
	std::cout << " Melee attack damage   : "	<<	_meleeAttackDamage <<  std::endl;
	std::cout << " Ranged attack damage  : "	<<	_rangedAttackDamage <<  std::endl;
	std::cout << " Armor damage reduction: "	<<	_armorDamageReduction <<  std::endl;
}


void		FragTrap::rangedAttack(std::string const & target){
	std::cout << "FR4G-TP <" << _name  << "> attacks <"  << target << "> at range, causing <"
			  << _rangedAttackDamage << "> points of damage !"  << std::endl;
}
void		FragTrap::meleeAttack(std::string const & target){
	std::cout << "FR4G-TP <" << _name  << "> attacks <"  << target << "> at melee, causing <"
			  << _rangedAttackDamage << "> points of damage !"  << std::endl;
}
void		FragTrap::throwingEggsAttack(std::string const & target){
	std::cout << "FR4G-TP <" << _name  << "> attacks <"  << target << "> at throwingEggs, causing <"
			  << _rangedAttackDamage << "> points of damage !"  << std::endl;
}
void		FragTrap::shoutAttack(std::string const & target){
	std::cout << "FR4G-TP <" << _name  << "> attacks <"  << target << "> at shout, causing <"
			  << _rangedAttackDamage << "> points of damage !"  << std::endl;
}
void		FragTrap::gostAttack(std::string const & target){
	std::cout << "FR4G-TP <" << _name  << "> attacks <"  << target << "> at gost, causing <"
			  << _rangedAttackDamage << "> points of damage !"  << std::endl;
}

void		FragTrap::vaulthunter_dot_exe(std::string const & target){
	int i;

	if (_vaulthunterCosts > _energyPoints){
		std::cout << "Sorry " << _name  <<   " you don't have energy enough"  << std::endl;
		return;
	}
	_energyPoints -= _vaulthunterCosts;

	srand(time(NULL));
	i = rand() % 5;
	if (i == 0)
		FragTrap::rangedAttack (target) ;
	else if (i == 1)
		FragTrap::meleeAttack(target) ;
	else if (i == 2)
		FragTrap::throwingEggsAttack(target) ;
	else if (i == 2)
		FragTrap::shoutAttack(target) ;
	else 
		FragTrap::gostAttack(target) ;
	
}

void		FragTrap::takeDamage(unsigned int amount){
	if (amount < _armorDamageReduction)
	{
		std::cout << " Take Domage : nothing to do "  <<  std::endl;
		return;
	}
	amount -= _armorDamageReduction;
	_hitPoints = (_hitPoints <= amount) ? 0 : _hitPoints - amount;
	std::cout << " Hit points  after damage: " << _hitPoints <<  std::endl;
}
void		FragTrap::beRepaired(unsigned int amount){

	if (_energyPoints == 0){
	std::cout << " No more energy to repared "  <<  std::endl;
	return ;
	}
	if (_hitPoints == _maxHitPoints){
			std::cout << " Nothing to repared "  <<  std::endl;
	return ;
	}
	amount = (amount >= _energyPoints) ? _energyPoints : amount;
	amount = (amount >= (_maxHitPoints - _hitPoints)) ? (_maxHitPoints - _hitPoints) : amount;
	_energyPoints  -= amount;
	_hitPoints += amount;
	std::cout << "the reparation costs "	<<	amount << " you have " << _hitPoints 
			  << " hitpoint and your energy level is " <<  _energyPoints << std::endl;

}

