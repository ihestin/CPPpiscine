/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 15:43:04 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/31 15:43:36 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_H
# define PLASMARIFLE_H

# include <iostream>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {


	public:
		PlasmaRifle(void);
		PlasmaRifle(PlasmaRifle const & rhs);
		~PlasmaRifle(void);
		using AWeapon::operator=;

		void 	attack() const ;



};


#endif
