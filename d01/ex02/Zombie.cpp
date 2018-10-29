/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 11:14:57 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/28 11:15:05 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type) {
	std::cout << "Zombie  named " << _name << " and with type " << _type << " created" << std::endl;
	return ;
}

Zombie::Zombie(void) : _name("INCONNU"), _type("UNKNOW") {
	std::cout << "Zombie  named " << _name << " and with type " << _type << " created" << std::endl;
	return ;
}


Zombie::~Zombie(void) {
	std::cout << "Zombie  named " << _name << " and with type " << _type << " distroyed" << std::endl;
	return ;
}

void	Zombie::announce(void) const {
	std::cout <<  "<" << _name << " (" << _type << ")> Braiiiiiiinnnssss..." << std::endl;
}

void		Zombie::setType(std::string type) {
	_type = type;
}

void		Zombie::setName(std::string name) {
	_name = name;
}

