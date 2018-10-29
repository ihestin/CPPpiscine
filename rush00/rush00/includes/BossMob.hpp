/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BossMob.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mploux <mploux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 23:00:05 by mploux            #+#    #+#             */
/*   Updated: 2018/04/01 23:00:05 by mploux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOSSMOB_HPP
# define BOSSMOB_HPP

# include <iostream>
# include <cmath>

# include "Mob.hpp"

class BossMob : public Mob
{
public:
	BossMob();

	BossMob(const int &x, const int &y);

	BossMob(const BossMob &o);

	virtual ~BossMob();

	BossMob &operator=(const BossMob &o);

	void update();

	void shoot();

	void takeDammage(const int &dammage);
};

#endif
