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


ScavTrap::ScavTrap(void) : ClapTrap("ScavTrap Unknow") {
	std::cout << "Scav Default constructor called Your name is " << _name << std::endl;
	_initLevel(1);
}


ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "<ScavTrap>: welcome  " << _name << std::endl;
	_initLevel(1);
}

ScavTrap::ScavTrap(ScavTrap const &scav) : ClapTrap() {
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

void		ScavTrap::rangedAttack(std::string const & target){
	std::cout << "FR4G-TP ScavTrap <" << _name  << "> attacks <"  << target << "> at range, causing <"
			  << _rangedAttackDamage << "> points of damage !"  << std::endl;
}
void		ScavTrap::meleeAttack(std::string const & target) const {
	std::cout << "FR4G-TP ScavTrap  <" << _name  << "> attacks <"  << target << "> at melee, causing <"
			  << _rangedAttackDamage << "> points of damage !"  << std::endl;
}

void		ScavTrap::challengeNewcomer(void) const {
	std::string	tabname[] = {" Go to 42 school ", "learn to swin",
		"Impress the corrector", " Validate D03", "Survive "};
	int 		i ;
	srand(time(NULL));
	i = rand() % 5;
	std::cout << "<ScavTrap> Your next challenge is " << tabname[i] << std::endl;

}


