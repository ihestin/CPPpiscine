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

Fixed::Fixed(int ii) : _RawBits(ii * (1 << _bits)){
	std::cout << "Int constructor called" << std::endl;
	return;
}

Fixed::Fixed(float ff) : _RawBits((int)roundf(ff * (1 << _bits))) {
	std::cout << "Float constructor called" << std::endl;
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

float	Fixed::toFloat(void) const{
	return  ((float) _RawBits) / ((float)(1<<_bits));
}
int 	Fixed::toInt(void) const{
	return  (_RawBits) / (1<<_bits);
}

bool	Fixed::operator>(Fixed const & rhs) const {
	return (_RawBits > rhs.getRawBits());
}
bool	Fixed::operator<(Fixed const & rhs) const {
	return (_RawBits < rhs.getRawBits());
}
bool	Fixed::operator>=(Fixed const & rhs) const {
	return (_RawBits >= rhs.getRawBits());
}
bool	Fixed::operator<=(Fixed const & rhs) const {
	return (_RawBits <= rhs.getRawBits());
}
bool	Fixed::operator==(Fixed const & rhs) const {
	return (_RawBits == rhs.getRawBits());
}
bool	Fixed::operator!=(Fixed const & rhs) const {
	return (_RawBits != rhs.getRawBits());
}

Fixed	Fixed::operator+(Fixed const & rhs) const {
	return Fixed(_RawBits + rhs.getRawBits());
}
Fixed	Fixed::operator-(Fixed const & rhs) const {
	return Fixed(_RawBits - rhs.getRawBits());
}
Fixed	Fixed::operator*(Fixed const & rhs) const {
	return Fixed(this->toFloat() * rhs.toFloat());
}
Fixed	Fixed::operator/(Fixed const & rhs) const {
	return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed &	Fixed::operator++(void) {
	_RawBits++;
	return (*this);
}
Fixed 	Fixed::operator++( int ) {
	Fixed tmp(*this);
	_RawBits++;
	return(tmp);
}
Fixed &	Fixed::operator--(void) {
	_RawBits--;
	return (*this);
}
Fixed 	Fixed::operator--( int ) {
	Fixed tmp(*this);
	_RawBits--;
	return(tmp);
}


std::ostream & operator<<( std::ostream & o, Fixed const & rhs) {
	o << rhs.toFloat();
	return o;
}


Fixed 	& 	min(Fixed & f1 ,Fixed & f2) {
	return (( f1 <= f2 ) ? f1 : f2);
}
Fixed 		min(Fixed const f1 ,Fixed const f2)  {
	return (( f1 <= f2 ) ? f1 : f2);
}
Fixed 	& 	max(Fixed & f1 ,Fixed & f2) {
	return (( f1 >= f2 ) ? f1 : f2);
}
Fixed 		max (Fixed const f1 ,Fixed const f2)  {
	return (( f1 >= f2 ) ? f1 : f2);
}


