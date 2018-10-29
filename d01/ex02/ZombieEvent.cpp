/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 11:19:41 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/28 11:20:06 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <cstdlib>

std::string	wrandom(void){
	std::string	tabname[] = {"Titi", "Zlub", "Zlork", "Toto", "Cygne noir",
							"Black swann", "gost","student42","Apple","CPP"};
	return (tabname[(rand()%10)]);

}

ZombieEvent::ZombieEvent(void) {
	_zombieType = "UNKNOW";
}

ZombieEvent::~ZombieEvent(void) {
}

void		ZombieEvent::setZombieType(std::string type) {
	_zombieType = type;
}

Zombie	*ZombieEvent::newZombie(std::string name){
	Zombie *newZombie = new Zombie(_zombieType, name);
	return newZombie;
}

void		ZombieEvent::randomChump(void){
	std::string randname = wrandom();
	Zombie 		zombren(randname, _zombieType);
	zombren.announce();
}