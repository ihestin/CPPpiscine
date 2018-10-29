/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 18:24:25 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/28 18:24:29 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void){
	return;
}

Brain::~Brain(void){
	return;
}

std::string	Brain::identify( void ) const {
	std::stringstream add;
	add << this;
	return add.str();
}