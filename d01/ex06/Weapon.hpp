/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 19:11:11 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/28 19:11:17 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon {

private:
	std::string		_type;

public:

	Weapon(std::string str);
	~Weapon(void);

	std::string 		getType() const;
	void				setType(std::string str);

};

#endif