/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 17:11:04 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/28 17:11:07 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <cstdlib>

std::string	wrandom(void){
	std::string	tabname[] = {"Titi", "Zlub", "Zlork", "Toto", "Cygne noir",
							"Black swann", "gost","student42","Apple","CPP"};
	return (tabname[(rand()%10)]);
}

ZombieHorde::ZombieHorde(int N) : _count(N) {
	_horde  = new Zombie[N];
	for (int i = 0; i < _count; i++)
	{
		_horde[i].setName(wrandom());
		_horde[i].setType("Horde");
	}
	std::cout << N << " Zombie(s) created  " << std::endl;
}

ZombieHorde::~ZombieHorde(void) {
	if (_count > 0)
	{
		delete [] _horde;
		std::cout << _count << " Zombie(s) deleted  " << std::endl;
	}
}

void	ZombieHorde::announce(void) const {
	for (int i = 0; i < _count; i++)
		_horde[i].announce();
}
