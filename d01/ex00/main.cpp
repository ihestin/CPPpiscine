/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 13:16:40 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/27 15:01:38 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

void	ponyOnTheHeap(std::string color){
	Pony    *pn;
	int		old;

	std::cout << "function ponyOnTheHeap start " << std::endl;	
	pn = new Pony(color);
	std::cout << std::endl << " Quel age a votre poney ?  " ;
	std::cin  >> old;
	std::cin.ignore(256, '\n');
	pn->setAge(old);
	std::cout << std::endl;
	delete pn;
	std::cout << "function ponyOnTheHeap end " << std::endl;	

}

void	ponyOnTheStack(std::string color) {
	Pony	pn(color);
	int		old;

	std::cout << "function ponyOnTheStack start " << std::endl;	
	std::cout << std::endl << " Quel age a votre poney ?  " ;
	std::cin  >> old;
	pn.setAge(old);
	std::cout << std::endl;
	std::cout << "function ponyOnTheStack end " << std::endl;	
}

int		main(void) {
	std::string col;

	std::cout << "Called of heap" << std::endl;
	std::cout << "What color? : ";
	std::getline(std::cin,col);
	std::cout << std::endl << std::endl;
	ponyOnTheHeap(col);
	std::cout  << std::endl;
	std::cout << "Called of stack" << std::endl;
	std::cout << "What color? : ";
	std::getline(std::cin,col);
	std::cout << std::endl;
	ponyOnTheStack(col);

	return(0);
}
