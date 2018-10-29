/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 14:54:06 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/27 08:52:45 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "phonebook.h"
#include "Contact.class.hpp"
#include <iostream>
#include <iomanip>

class Phonebook {
	private:
		Contact	_clist[MAX_CONTACT];
		int		_nbr;
	
	public:
		Phonebook(void);
		~Phonebook(void);

		void	add(void);
		void	search(void) const;
};

#endif
