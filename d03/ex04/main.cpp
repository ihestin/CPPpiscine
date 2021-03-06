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
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main(void){
	FragTrap 	F1;
	FragTrap	F2("Frag Senior");
	
//	ScavTrap 	S1;
//	ScavTrap	S2("Scav Junior");

	ClapTrap	C("clap toto");

	NinjaTrap	N("Ninja Ninja");
	SuperTrap   Su1("Super Man");
	SuperTrap   Su2;

	F2.displayScore();
//	S2.displayScore();
	N.displayScore();

//	F2.rangedAttack("test Frag");
//	S2.rangedAttack("test Scav");
	
//	F2.meleeAttack("fractal");
//	S2.meleeAttack("scav ere");

//	F2.beRepaired(25);
//	S2.beRepaired(25);

//	F2.takeDamage(10);
//	S2.takeDamage(10);
	N.takeDamage(50);

//	F2.beRepaired(25);
//	S2.beRepaired(25);

	Su2.vaulthunter_dot_exe("RRR ....");

	F2.displayScore();
	C.displayScore();
	N.displayScore();
	Su1.displayScore();
	Su2.displayScore();
	N.ninjaShoebox(N);
	Su1.ninjaShoebox(N);
	Su1.meleeAttack("Super");
	Su2.rangedAttack("Super");

//	N.ninjaShoebox(N);
//	N.ninjaShoebox(F2);
//	N.ninjaShoebox(C);

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

	
