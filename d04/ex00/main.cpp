/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 12:03:56 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/31 12:03:59 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include "Sorcerer.hpp"


int main() {

Sorcerer	robert("Robert", "the Magnificent");
Victim		jim("Jimmy");
Peon		joe("Joe");

std::cout << robert << jim << joe;
robert.polymorph(jim);
robert.polymorph(joe);

return 0; 
}
