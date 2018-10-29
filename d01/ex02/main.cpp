/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 11:17:42 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/28 11:17:44 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(){
	Zombie t1;
	Zombie *t2;
	ZombieEvent z;

	z.randomChump();
	z.setZombieType("NEW");
	z.randomChump();
	t2 =z.newZombie("toto");
	t2->announce();
	t1.setType("Hep");
	t1.setName("HepHep");

	delete t2;
	return (0);

}
