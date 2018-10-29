/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullet.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mploux <mploux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 23:00:54 by mploux            #+#    #+#             */
/*   Updated: 2018/04/01 23:00:54 by mploux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bullet.hpp"
#include "Core.hpp"

Bullet::Bullet()
	: AEntity(), m_vx(0), m_vy(0), m_type('?'), m_dammage(10), m_parentID(-1)
{
	m_colorId = 4;
}

Bullet::Bullet(const int &parentID, const float &x, const float &y, const float &vx, const float &vy, char type, int dammage)
	: AEntity(x, y), m_vx(vx), m_vy(vy), m_type(type), m_dammage(dammage), m_parentID(parentID)
{
	m_colorId = 4;
}

Bullet::Bullet(const Bullet &o)
{
	*this = o;
}

Bullet::~Bullet()
{
	std::cout << "Bullet deleted" << std::endl;
}

Bullet &Bullet::operator=(const Bullet &o)
{
	if (this != &o)
	{

	}
	return *this;
}

void Bullet::update()
{
	if (m_dead)
		return;
	m_x += m_vx;
	m_y += m_vy;

	AEntity *hit = getCollidingEntity();
	if (hit != NULL &&
			dynamic_cast<Bullet*>(hit) == NULL &&
			dynamic_cast<Particle*>(hit) == NULL &&
			dynamic_cast<ParticleSystem*>(hit) == NULL &&
			dynamic_cast<HealthPack*>(hit) == NULL &&
			hit->getID() != m_parentID)
	{
		if (m_parentID == 0)
		{
			Core::getInstance().getGame()->setScore(Core::getInstance().getGame()->getScore() + 10);
		}
		hit->takeDammage(m_dammage);
		m_dead = true;
	}
	if (m_x < 1)
	{
		m_x = 1;
		m_dead = true;
	}
	if (m_y < 1)
	{
		m_y = 1;
		m_dead = true;
	}
	if (m_x > Core::getInstance().getScreen().getWidth() - 1)
	{
		m_x = Core::getInstance().getScreen().getWidth() - 1;
		m_dead = true;
	}
	if (m_y > Core::getInstance().getScreen().getHeight() - 1)
	{
		m_y = Core::getInstance().getScreen().getHeight() - 1;
		m_dead = true;
	}
}

void Bullet::render()
{
	if (m_dead)
		return;
	attron(COLOR_PAIR(m_colorId));
	move((int) m_y, (int) m_x);
	addch(m_type);
	attron(COLOR_PAIR(1));
}
