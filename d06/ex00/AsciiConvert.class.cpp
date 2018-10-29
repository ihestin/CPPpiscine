/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AsciiConvert.class.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 14:35:48 by ihestin           #+#    #+#             */
/*   Updated: 2018/04/04 14:35:51 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AsciiConvert.class.hpp"

AsciiConvert::AsciiConvert(void)  {}
AsciiConvert::AsciiConvert(std::string strv) : _strv(strv) {}
AsciiConvert::AsciiConvert(AsciiConvert const &rhs) {
		*this = rhs;
}
AsciiConvert::~AsciiConvert(void) {}

AsciiConvert		& AsciiConvert::operator=(AsciiConvert const &rhs) {
		this->_strv = rhs.getStrv();
		return (*this);
}
std::string	AsciiConvert::getStrv( void ) const {
	return _strv;
}



AsciiConvert::operator char(void) const {
	char	ch = static_cast<char>(std::atoi(this->_strv.c_str()));
	if (errno)
		throw (ConversionException());
	return (ch);
}

AsciiConvert::operator int(void) const {
	int		i = std::atoi(this->_strv.c_str());
	if (errno)
		throw (ConversionException());
	return (i);
}

AsciiConvert::operator float(void) const {
	float		fl = std::atof(this->_strv.c_str());
	if (errno)
		throw (ConversionException());
	return (fl);
}

AsciiConvert::operator double(void) const {
	double		df = std::strtod(this->_strv.c_str(),NULL);
	if (errno)
		throw (ConversionException());
	return (df);
}

/* ************************************************************************** */
/*                                                                            */
/*  		Exception ConversionException 									  */
/* ************************************************************************** */
AsciiConvert::ConversionException::ConversionException(void){};
AsciiConvert::ConversionException::ConversionException(ConversionException const & rhs)  {
	*this = rhs;
}
AsciiConvert::ConversionException & AsciiConvert::ConversionException::operator=(ConversionException const & rhs) {
	if (this == &rhs) {}
	return (*this) ;
}
AsciiConvert::ConversionException::~ConversionException(void) throw(){};

const char*  AsciiConvert::ConversionException::what() const throw() {
    return (" Conversion Error ");
}



