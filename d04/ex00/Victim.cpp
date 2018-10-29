/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 14:08:47 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/31 14:08:56 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"


Victim::Victim(void) : _name("Default") {
	std::cout << "Some random victim called "  << _name << " just popped !" << std::endl;
}

Victim::Victim(std::string name) : _name(name) {
	std::cout << "Some random victim called " << _name << " just popped !" << std::endl;
}

Victim::Victim(Victim const &rhs) {
		*this = rhs;
	std::cout << "Some random victim called " << _name << " just cloned !" << std::endl;
}

Victim::~Victim(void) {
		std::cout << "Victim " << _name << " just died for no apparent reason !" << std::endl;
}

Victim		& Victim::operator=(Victim const &rhs) {
		this->_name = rhs.getName();
		return (*this);
}

std::string	Victim::getName( void ) const {
		return _name;
}

std::ostream & operator<<( std::ostream & o, Victim const & rhs) {
	o << "I'm " << rhs.getName() << "  and I like otters !" << std::endl;
	return o;
}

