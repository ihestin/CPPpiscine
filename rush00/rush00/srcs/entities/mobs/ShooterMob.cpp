/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShooterMob.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mploux <mploux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 23:01:02 by mploux            #+#    #+#             */
/*   Updated: 2018/04/01 23:01:02 by mploux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShooterMob.hpp"
#include "Core.hpp"

ShooterMob::ShooterMob()
	: Mob()
{
	m_colorId = 3;
	m_spriteWidth = 3;
	m_spriteHeight = 3;
	m_sprite = new std::string[m_spriteHeight];
	m_sprite[0] = "* *";
	m_sprite[1] = " X ";
	m_sprite[2] = "* *";
}

ShooterMob::ShooterMob(const int &x, const int &y)
	: Mob(x, y)
{
	m_colorId = 3;
	m_spriteWidth = 5;
	m_spriteHeight = 3;
	if (m_sprite != NULL)
		delete[] m_sprite;
	m_sprite = new std::string[m_spriteHeight];
	m_sprite[0] =  "\\|||/";
	m_sprite[1] =  " \\U/ ";
	m_sprite[2] =  "  V  ";
}

ShooterMob::ShooterMob(const ShooterMob &o)
{
	*this = o;
}

ShooterMob::~ShooterMob()
{
	std::cout << "Deleted Mob" << std::endl;
}

ShooterMob &ShooterMob::operator=(const ShooterMob &o)
{
	(void) o;
	return *this;
}

void ShooterMob::update()
{
	if (m_dead)
		return;
	m_time++;
	if (m_time % 40 == 0)
		shoot();

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

void ShooterMob::shoot()
{
	AEntity *b = new Bullet(m_id, m_x + m_spriteWidth / 2, m_y + m_spriteHeight, 0, 1, '*', 10);
	Core::getInstance().getGame()->add(b);

//	AEntity *c = new Bullet(this, m_x + m_spriteWidth / 2 + 2, m_y + m_spriteHeight - 1, 0, 1, '*', 10);
//	Core::getInstance().getGame().add(c);
}
