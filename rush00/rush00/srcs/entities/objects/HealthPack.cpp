/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HealthPack.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mploux <mploux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 23:01:05 by mploux            #+#    #+#             */
/*   Updated: 2018/04/01 23:01:05 by mploux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HealthPack.hpp"
#include "Core.hpp"

HealthPack::HealthPack()
	: AEntity(), m_regen(0)
{
}

HealthPack::HealthPack(const int &x, const int &y, const int &regen)
	: AEntity(x, y), m_regen(regen)
{
}

HealthPack::HealthPack(const HealthPack &o)
{
	*this = o;
}

HealthPack::~HealthPack()
{
}

HealthPack &HealthPack::operator=(const HealthPack &o)
{
	if (this !=&o)
	{

	}
	return *this;
}

void HealthPack::update()
{
	if (m_dead)
		return;
	m_y += Core::getInstance().getGame()->getScrollSpeed();
	if (m_y > Core::getInstance().getScreen().getHeight() - 1)
		m_dead = true;
	AEntity *hit = getCollidingEntity();
	if (dynamic_cast<Player*>(hit) != NULL)
	{
		hit->setLife(hit->getLife() + m_regen);
		m_dead = true;
	}
}

void HealthPack::render()
{
	if (m_dead)
		return;
	if (m_y < 1 || m_x < 1 ||
		m_x > Core::getInstance().getScreen().getWidth() - 1 || m_y > Core::getInstance().getScreen().getHeight() - 1)
		return;
	attron(COLOR_PAIR(9));
	move((int) m_y, (int) m_x);
	addch('o');
	attron(COLOR_PAIR(1));
}
