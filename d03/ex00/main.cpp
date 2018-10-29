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

#include "FragTrap.hpp"

int main(void){
	FragTrap 	N1;
	FragTrap	N2("Aie");

	std::cout << N1.getName() <<  std::endl;
	std::cout << N2.getName() <<  std::endl;
	N2.rangedAttack("test 1");
	N1.meleeAttack("Aie");

	N1.displayScore();
	N1.beRepaired(25);
	N2.takeDamage(10);
	N2.displayScore();
	N2.beRepaired(25);
	N2.displayScore();
	N2.takeDamage(120);
	N2.beRepaired (25);
	N2.vaulthunter_dot_exe("RRR ....");
	N2.displayScore();
	N2.beRepaired (25);
	N2.vaulthunter_dot_exe("RRR ....");
	N2.beRepaired (25);
	N2.displayScore();
	FragTrap	N3(N2);
	N3.displayScore();

}

	
