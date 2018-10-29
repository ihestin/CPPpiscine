/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 14:08:18 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/31 14:08:23 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"


Sorcerer::Sorcerer(void) : _name("Default_name"), _title("Unknow") {
		std::cout << _name << ", " << _title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(std::string name, std::string  title) : _name(name),_title(title) {
		std::cout << _name << ", " << _title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &rhs) {
		*this = rhs;
		std::cout << _name << ", " << _title << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer(void) {
		std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer		& Sorcerer::operator=(Sorcerer const &rhs) {
		this->_name = rhs.getName();
		this->_title = rhs.getTitle();
		return (*this);
}

std::string		Sorcerer::getName( void ) const {
		return _name;
}

std::string		Sorcerer::getTitle( void ) const {
		return _title;
}

void			Sorcerer::polymorph(Victim const & vct){
		std::cout << vct.getName() << " has been turned into a cute little sheep !" << std::endl;
}
void			Sorcerer::polymorph(Peon const & peon){
		std::cout << peon.getName() << " has been turned into a pink pony !" << std::endl;
}


std::ostream & operator<<( std::ostream & o, Sorcerer const & rhs) {
		o << "I am "<< rhs.getName() << ", " << rhs.getTitle() << ", and I like ponies !" << std::endl;
			return o;
}


