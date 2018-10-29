/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 13:40:27 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/27 09:12:20 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "phonebook.h"
#include "Phonebook.class.hpp"

int		main(void)
{
	std::string	buf;
	Phonebook	ph;
	int			ret;

	std::cout << " Wellcome to the BEAUTIFULL PHONEBOOK " << std::endl;
	std::cout << " you can have until " << MAX_CONTACT << " friends or contacts" << std::endl << std::endl;
	ret = 0;

	while (true)
	{
		std::cout << " Enter ADD to add a new contact, SEARCH to search a contact and EXIT to close the phonebook ";
		std::cout << std::endl;
		std::getline(std::cin,buf);
		if (!buf.compare("EXIT"))
		{
			std::cout << " goodbye, see you soon " << std::endl;
			return (0);
		}
		if (!buf.compare("ADD"))
			ph.add();
		else if (!buf.compare("SEARCH"))
			ph.search();
		else
		{
			std::cout << "Invalide Entry " << std::endl;
		}
	}
}
