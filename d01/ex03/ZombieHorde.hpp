/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 17:11:55 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/28 17:12:00 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H

#include "Zombie.hpp"
#include <iostream>

class ZombieHorde {
private:
	Zombie  *_horde;
	int		_count;

public:
	ZombieHorde(int N);
	~ZombieHorde(void);

	void	announce(void) const;
};

#endif