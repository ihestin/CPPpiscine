/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShooterMob.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mploux <mploux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 23:01:52 by mploux            #+#    #+#             */
/*   Updated: 2018/04/01 23:01:52 by mploux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHOOTERMOB_HPP
# define SHOOTERMOB_HPP

# include <iostream>
# include <cmath>

# include "Mob.hpp"

class ShooterMob : public Mob
{
public:
	ShooterMob();

	ShooterMob(const int &x, const int &y);

	ShooterMob(const ShooterMob &o);

	virtual ~ShooterMob();

	ShooterMob &operator=(const ShooterMob &o);

	void update();

	void shoot();
};

#endif
