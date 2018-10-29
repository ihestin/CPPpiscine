/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 19:11:33 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/28 19:11:37 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_H
# define HUMANA_H

#include <iostream>
#include "Weapon.hpp"


class HumanA {

private:
	Weapon 	& 		_wp;
	std::string		_name;

public:

	HumanA(std::string name, Weapon& wp);
	~HumanA(void);

	void attack(void) const;
};



#endif
