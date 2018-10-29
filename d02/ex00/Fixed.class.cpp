/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 12:37:36 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/29 12:37:42 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed(void) : _RawBits(0){
	std::cout << "Default constructor called" << std::endl;
	return;
};
Fixed::Fixed(Fixed const & fix) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fix;
	return;
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed & 	Fixed::operator=( Fixed const & rhs ){
	std::cout << "Assignation operator called " << std::endl;
	this->_RawBits = rhs.getRawBits();
	return *this;
}

int			Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return _RawBits;
}

int			Fixed::getBits( void ) const {
	std::cout << "getBits member function called" << std::endl;
	return _bits;
}

void 	Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
	_RawBits = raw;
	return;
}