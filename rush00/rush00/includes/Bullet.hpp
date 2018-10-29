/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullet.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mploux <mploux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 23:00:07 by mploux            #+#    #+#             */
/*   Updated: 2018/04/01 23:00:07 by mploux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BULLET_HPP
# define BULLET_HPP

# include <iostream>
# include <curses.h>

# include "AEntity.hpp"
# include "Particle.hpp"
# include "ParticleSystem.hpp"
# include "HealthPack.hpp"

class Bullet :  public AEntity
{
private:
	float	m_vx;
	float	m_vy;
	char	m_type;
	int		m_dammage;
    int 	m_parentID;

public:
	Bullet();

	Bullet(const int &parentID, const float &x, const float &y, const float &vx, const float &vy, char type, int dammage);

	Bullet(const Bullet &o);

	virtual ~Bullet();

	Bullet &operator=(const Bullet &o);

	void update();

	void render();
};

#endif
