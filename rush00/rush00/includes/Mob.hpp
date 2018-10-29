/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mob.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mploux <mploux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 23:00:19 by mploux            #+#    #+#             */
/*   Updated: 2018/04/01 23:00:19 by mploux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMOB_HPP
# define AMOB_HPP

# include <iostream>
# include <cmath>
# include "AEntity.hpp"

class Mob : public AEntity
{
public:
	Mob();

	Mob(const int &x, const int &y);

	Mob(const Mob &o);

	virtual ~Mob();

	Mob &operator=(const Mob &o);

	virtual void update();
};

#endif
