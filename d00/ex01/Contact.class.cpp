/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 16:29:43 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/27 11:58:23 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void) {
	_etat = 0;
	return ;
}

Contact::~Contact(void) {
	return ;
}

void	Contact::_enter(std::string *field, std::string str, char m) {
	std::cout << "Enter your " << str ;
	std::cout << std::setw ((18 - str.length()));
	std::cout << " : " ;
	getline(std::cin,*field, '\n');
	while (field->length() == 0 && m == 'm')
	{
		std::cout << str << " is mandatory" << std::endl;
		std::cout << "Enter your " << str ;
		std::cout << std::setw ((18 - str.length()));
		std::cout << " : " ;
		getline(std::cin,*field, '\n');
	}
}

int Contact::add(void){
	_enter(&_firstname, "first name", 'm');
	_enter(&_lastname, "last name", 'm');
	_enter(&_nickname, "nickname", 'm');
	_enter(&_login, "login", 'm');
	_enter(&_postaladd, "Postal address", 'o');
	_enter(&_emailadd, "email address", 'o');
	_enter(&_phonenum, "phone number", 'o');
	_enter(&_birthdate, "birthday date", 'o');
	_enter(&_favmeal, "favorite meal", 'o');
	_enter(&_uwearcol, "underwear color", 'o');
	_enter(&_darksecret, "darkest secret", 'o');

	_etat = 1;
	return (0);
	std::cout << "Enter your first name " << std::endl;
}

void	Contact::print10firstname(void) const {
	std::cout << std::setw(10);
	if (_firstname.length() <= 10)
		std::cout <<_firstname;
	else
		std::cout <<  (_firstname.substr(0,9)).append(".");
}
void  Contact::printfirstname(void) const {
	std::cout <<_firstname;
	return ;
}

std::string     Contact::getfirstname(void) const {
	return _firstname;
}

std::string     Contact::getlastname(void) const {
	return _lastname;
}

std::string     Contact::getnickname(void) const {
	return _nickname;
}

std::string     Contact::getlogin(void) const {
	return _login;
}

std::string     Contact::getpostaladd(void) const {
	return _postaladd;
}

std::string     Contact::getemaiadd(void) const {
	return _emailadd;
}

std::string     Contact::getphonenum(void) const {
	return _phonenum;
}

std::string     Contact::getbirthdate(void) const {
	return _birthdate;
}

std::string     Contact::getfavmeal(void) const {
	return _favmeal;
}

std::string     Contact::getuwearcol(void) const {
	return _uwearcol;
}

std::string     Contact::getdarksecret(void) const {
	return _darksecret;
}

