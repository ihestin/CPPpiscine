/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 15:07:05 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/31 15:15:57 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_H
# define AWEAPON_H

# include <iostream>

class AWeapon {

	private:

	protected:
		std::string		_name;
		int				_APCost;
		int 			_damage;


	public:
		AWeapon(void);
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(AWeapon const & rhs);
		virtual ~AWeapon(void);

		AWeapon  			&operator=(AWeapon const &rhs);
		std::string	const &	getName( void ) const;
		int 				getAPCost() const;
        int 				getDamage() const;
        
        virtual void attack() const = 0;

};


#endif
