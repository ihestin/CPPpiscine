/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mob.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mploux <mploux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 23:00:59 by mploux            #+#    #+#             */
/*   Updated: 2018/04/01 23:01:00 by mploux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Mob.hpp"
#include "Core.hpp"

Mob::Mob()
	: AEntity()
{
	m_colorId = 3;
	m_spriteWidth = 3;
	m_spriteHeight = 3;
	m_sprite = new std::string[m_spriteHeight];
	m_sprite[0] = "* *";
	m_sprite[1] = " X ";
	m_sprite[2] = "* *";
}

Mob::Mob(const int &x, const int &y)
	: AEntity(x, y)
{
	m_colorId = 3;
	m_spriteWidth = 4;
	m_spriteHeight = 2;
	m_sprite = new std::string[m_spriteHeight];
	m_sprite[0] = "/MM\\";
	m_sprite[1] = "\\~~/";
}

Mob::Mob(const Mob &o)
{
	*this = o;
}

Mob::~Mob()
{
	std::cout << "Deleted Mob" << std::endl;
}

Mob &Mob::operator=(const Mob &o)
{
	(void) o;
	return *this;
}

void Mob::update()
{
	if (m_dead)
		return;
	m_time++;
	m_x = m_sx + sin(m_time * 0.1) * 5;
	m_y += Core::getInstance().getGame()->getScrollSpeed();
    if (m_y > Core::getInstance().getScreen().getHeight() - 1)
        m_dead = true;
    AEntity *hit = getCollidingEntity();
    if (dynamic_cast<Player*>(hit) != NULL)
    {
        m_dead = true;
        hit->setDead(true);
        Core::getInstance().getGame()->add(new ParticleSystem(m_x, m_y, 10));
    }
}
