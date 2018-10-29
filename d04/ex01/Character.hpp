/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 18:04:14 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/31 18:04:54 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

# include <iostream>
#include "Enemy.hpp"
#include "AWeapon.hpp"

class Character {

	private:
		std::string		_name;
		int				_AP;
		AWeapon *		_weapon;

	public:
		Character(void);
		Character(std::string name);
		Character(Character const & rhs);
		~Character(void);

		Character  			&operator=(Character const &rhs);
		void 				recoverAP(void);
		void 				equip(AWeapon *weapon);
		void 				attack(Enemy *enemy);

		std::string	const &	getName( void ) const;
		int 				getAP( void ) const;
		AWeapon *			getWeapon( void )const;
};

std::ostream & operator<<( std::ostream & o, Character const & rhs);

#endif
