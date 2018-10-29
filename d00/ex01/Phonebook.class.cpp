/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 15:10:15 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/27 11:43:19 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

void	affiche10(std::string str){
	std::cout << std::setw(10);
	if (str.length() <= 10)
		std::cout << str << "|";
	else
		std::cout <<  (str.substr(0,9)).append(".") << "|";
}

Phonebook::Phonebook (void) {
	_nbr = 0;
	return;
}

Phonebook::~Phonebook (void) {
	return;
}

void Phonebook::add(void) {
	if (_nbr >= MAX_CONTACT)
	{
		std::cout << " Max contacts reached " << std::endl;
		return;
	}
	if(!_clist[_nbr].add()){
		_nbr++;
		std::cout << " contact added successfuly" << std::endl;
		return;
	}
	return;
}

void		Phonebook::search(void) const {
	int 		i;
	int 		ind;
	std::string	cind;

	if (_nbr == 0)
	{
		std::cout << "No contact"<< std::endl;
		return;
	}
	std::cout << "     index|first name| last name|  nickname|" << std::endl;
	for (i = 0 ; i < _nbr; i++)
	{
		std::cout << std::setw(10);
		std::cout << i << "|";
		affiche10 (_clist[i].getfirstname());
		affiche10 (_clist[i].getlastname());
		affiche10 (_clist[i].getnickname());
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << "choose an index to have detail" << std::endl;
	std::getline(std::cin,cind);
	ind = -1;
	if (cind.size() > 0 && cind[0] >= '0' && cind[0] <= '9')
	{
		ind = 0;
		for (i = 0 ; i < (int) cind.size() && cind[i] >= '0' && cind[i] <= '9'; i++)
			ind = ind * 10 + (cind[i] - '0');
	}
	if (ind >= 0 && ind < _nbr)
	{
		std::cout << "firstname      : " << _clist[ind].getfirstname() <<std::endl;
		std::cout << "lastname       : " << _clist[ind].getlastname() <<std::endl;
		std::cout << "nickname       : " << _clist[ind].getnickname() <<std::endl;
		std::cout << "login          : " << _clist[ind].getlogin() <<std::endl;
		std::cout << "postal address : " << _clist[ind].getpostaladd() <<std::endl;
		std::cout << "email address  : " << _clist[ind].getemaiadd() <<std::endl;
		std::cout << "phone number   : " << _clist[ind].getphonenum() <<std::endl;
		std::cout << "birthday date  : " << _clist[ind].getbirthdate() <<std::endl;
		std::cout << "favorite meal  : " << _clist[ind].getfavmeal() <<std::endl;
		std::cout << "underwear color: " << _clist[ind].getuwearcol() <<std::endl;
		std::cout << "darkest secret : " << _clist[ind].getdarksecret() <<std::endl;
		return;

	}
	else
	{
		std::cout << " invalid number"<<std::endl;
		return;
	}
}

