/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 17:12:25 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/28 17:12:29 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main(void){
	ZombieHorde	 h1(4)	;
	ZombieHorde	 h2(0);

	h1.announce();
	h2.announce();
	return (0);
}