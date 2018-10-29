/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 18:24:59 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/28 18:25:07 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Human.hpp"

Human::Human(void) {
	return;
}

Human::~Human(void) {
	return;
}

std::string Human::identify(void) const {
	return(_hBrain.identify());
}

const Brain &Human::getBrain(void) const {
	return(_hBrain);
}