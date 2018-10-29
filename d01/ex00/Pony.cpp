/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 13:15:36 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/27 14:52:25 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string color ) : _color(color) {
	std::cout << "Constructor called" << std::endl;
	std::cout << "The color is : " << _color ;
	_age = 0;
	std::cout << " and the default age is " << _age << " years old"<< std::endl; 
}

Pony::~Pony(void) {
	std::cout << "Pony with color " << _color << " and age " << _age; 
	std::cout <<" is destroy (just from database)" << std::endl;
}

void Pony::setAge(int age){
	
	_age = age;
	 return ;
}

int		Pony::getAge(void){
	return _age;
}
