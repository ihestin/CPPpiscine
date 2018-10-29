/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 15:49:38 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/27 11:43:10 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>
#include <string>
#include <iomanip>

class Contact {

	private :
		int				_etat;
		std::string		_firstname;
		std::string		_lastname;
		std::string		_nickname;
		std::string		_login;
		std::string		_postaladd;
		std::string		_emailadd;
		std::string		_phonenum;
		std::string		_birthdate;
		std::string		_favmeal;
		std::string		_uwearcol;
		std::string		_darksecret;

		void			_enter(std::string *field, std::string str, char m);

	public :
						Contact(void);
						~Contact(void);

		int				add(void);
		void			print10firstname(void) const;
		void			printfirstname(void) const;
		std::string		getfirstname(void) const;
		std::string		getlastname(void) const;
		std::string		getnickname(void) const;
		std::string		getlogin(void) const;
		std::string		getpostaladd(void) const;
		std::string		getemaiadd(void) const;
		std::string		getphonenum(void) const;
		std::string		getbirthdate(void) const;
		std::string		getfavmeal(void) const;
		std::string		getuwearcol(void) const;
		std::string		getdarksecret(void) const;
};

#endif
