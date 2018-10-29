/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 11:15:57 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/28 11:16:17 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H

#include "Zombie.hpp"
#include <iostream>

class ZombieEvent {
private:
	std::string	_zombieType;

public:

	ZombieEvent(void);
	~ZombieEvent(void);

	void		setZombieType(std::string type);
	Zombie*		newZombie(std::string name);
	
	void		randomChump(void);
};


#endif