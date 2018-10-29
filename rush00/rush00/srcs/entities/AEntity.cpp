/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AEntity.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mploux <mploux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 00:16:58 by mploux            #+#    #+#             */
/*   Updated: 2018/04/01 23:02:28 by mploux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AEntity.hpp"
#include "Core.hpp"

AEntity::AEntity()
	: m_x(0), m_y(0),
	  m_sx(0), m_sy(0),
	  m_dead(false),
	  m_spriteHeight(1),
	  m_spriteWidth(1),
	  m_sprite(NULL),
	  m_colorId(0),
	  m_life(1),
	  m_gotHit(false),
	  m_time(0)
{
}

AEntity::AEntity(const float &x, const float &y)
	: m_x(x), m_y(y),
	  m_sx(x), m_sy(y),
	  m_dead(false),
	  m_spriteHeight(1),
	  m_spriteWidth(1),
	  m_sprite(NULL),
	  m_colorId(0),
	  m_life(1),
	  m_gotHit(false),
	  m_time(0)
{
}

AEntity::AEntity(const AEntity &e)
{
	*this = e;
}

AEntity::~AEntity()
{
	std::cout << "AEntity deleted" << std::endl;
	if (m_sprite != NULL)
	{
		delete[] m_sprite;
		m_sprite = NULL;
	}
}

AEntity &AEntity::operator=(const AEntity &e)
{
	if (this != &e)
	{
		m_x = e.m_x;
		m_y = e.m_y;
		m_dead = e.m_dead;
	}
	return *this;
}

void AEntity::render()
{
	attron(COLOR_PAIR(m_colorId));
	for (int y = 0; y < m_spriteHeight; y++)
	{
		if (m_y + y <= 1)
			continue;
		if (m_y + y >= Core::getInstance().getScreen().getHeight() - 1)
			continue;
		move((int) m_y + y, (int) m_x);
		printw(m_sprite[y].c_str());
	}
	attron(COLOR_PAIR(1));
}

void AEntity::input(int key)
{
	(void) key;
}

void AEntity::moveEntity(float dx, float dy, bool collision)
{
	m_x += dx;
	m_y += dy;

	if (collision)
	{
		if (m_x < 1)
			m_x = 1;
		if (m_y < 1)
			m_y = 1;
		if (m_x + m_spriteWidth > Core::getInstance().getScreen().getWidth() - 1)
			m_x = Core::getInstance().getScreen().getWidth() - m_spriteWidth - 1;
		if (m_y + m_spriteHeight > Core::getInstance().getScreen().getHeight() - 1)
			m_y = Core::getInstance().getScreen().getHeight() - m_spriteHeight - 1;
	}
}

void AEntity::shoot()
{
}

AEntity *AEntity::getCollidingEntity() const
{
	EntityManager *em = Core::getInstance().getGame()->getEntities();
	for (int i = 0; i < ENTITY_COUNT; i++)
	{
		if (i == m_id)
			continue;
		AEntity *e = em->getEntities()[i];
		if (e != NULL)
		{
			if (m_x + m_spriteWidth > e->getX() && m_x <= e->getX() + e->getW() + 1 &&
				m_y + m_spriteHeight > e->getY() && m_y <= e->getY() + e->getH() + 1)
				return e;
		}
	}
	return NULL;
}

void AEntity::takeDammage(const int &dammage)
{
	if (m_life - dammage <= 0)
	{
		m_dead = true;
		Core::getInstance().getGame()->add(new ParticleSystem(m_x, m_y, 10));
		return;
	}
	m_life -= dammage;
	m_gotHit = true;
}

void AEntity::regenLife(const int &regen)
{
	m_life += regen;
}

int AEntity::getID() const
{
	return m_id;
}

void AEntity::setID(int id)
{
	m_id = id;
}

int AEntity::getX() const
{
	return m_x;
}

void AEntity::setX(int x)
{
	m_x = x;
}

int AEntity::getY() const
{
	return m_y;
}

void AEntity::setY(int y)
{
	m_y = y;
}

int AEntity::getW() const
{
	return m_spriteWidth;
}

void AEntity::setW(int w)
{
	m_spriteWidth = w;
}

int AEntity::getH() const
{
	return m_spriteHeight;
}

void AEntity::setH(int h)
{
	m_spriteHeight = h;
}

int AEntity::getLife() const
{
	return m_life;
}

void AEntity::setLife(int life)
{
	m_life = life;
}

bool AEntity::isDead() const
{
	return m_dead;
}

void AEntity::setDead(bool dead)
{
	m_dead = dead;
}

const std::string *AEntity::getSprite() const
{
	return m_sprite;
}
