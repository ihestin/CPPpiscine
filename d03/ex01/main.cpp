/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 18:31:56 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/29 18:32:01 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void){
	FragTrap 	F1;
	FragTrap	F2("Frag Senior");
	
	ScavTrap 	S1;
	ScavTrap	S2("Scav Junior");

	F2.displayScore();
	S2.displayScore();

	F2.rangedAttack("test Frag");
	S2.rangedAttack("test Scav");
	
	F2.meleeAttack("fractal");
	S2.meleeAttack("scav ere");

	F2.beRepaired(25);
	S2.beRepaired(25);

	F2.takeDamage(10);
	S2.takeDamage(10);

	F2.beRepaired(25);
	S2.beRepaired(25);

	F2.vaulthunter_dot_exe("RRR ....");
	S2.challengeNewcomer();

	F2.displayScore();
	FragTrap	F3(F2);
	F2.displayScore();
	S2.displayScore();
	ScavTrap	S3(S2);
	S3.displayScore();

/*	F2.beRepaired(25);
	F2.displayScore();
	F2.takeDamage(120);
	F2.beRepaired (25);
	F2.vaulthunter_dot_exe("RRR ....");
	F2.displayScore();
	F2.beRepaired (25);
	F2.vaulthunter_dot_exe("RRR ....");
	F2.beRepaired (25);
	F2.displayScore();
*/

}

	
