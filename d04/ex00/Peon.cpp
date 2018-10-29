/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 14:07:16 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/31 14:07:21 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"


Peon::Peon(void) : Victim("Default") {
		std::cout << "Zog zog. " << std::endl;
}

Peon::Peon(std::string name) : Victim (name) {
		std::cout << "Zog zog. " << std::endl;
}

Peon::Peon(Peon const &rhs) {
		*this = rhs;
		std::cout << "Zog zog. " << std::endl;
}

Peon::~Peon(void) {
		std::cout << "Bleuark..." << std::endl;
}

Peon		& Peon::operator=(Peon const &rhs) {
		this->_name = rhs.getName();
		return (*this);
}


std::ostream & operator<<( std::ostream & o, Peon const & rhs) {
	o << "I'm " << rhs.getName() << "  and I like otters !" << std::endl;
	return o;
}

