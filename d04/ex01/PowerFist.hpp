/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 15:44:39 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/31 16:33:18 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_H
# define POWERFIST_H

# include <iostream>
#include "AWeapon.hpp"

class PowerFist : public AWeapon {


	public:
		PowerFist(void);
		PowerFist(PowerFist const & rhs);
		~PowerFist(void);
		using AWeapon::operator=;

		void 	attack() const ;



};


#endif
