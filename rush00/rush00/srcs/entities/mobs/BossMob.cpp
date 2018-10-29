/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BossMob.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mploux <mploux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 23:00:56 by mploux            #+#    #+#             */
/*   Updated: 2018/04/01 23:00:57 by mploux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BossMob.hpp"
#include "Core.hpp"

BossMob::BossMob()
	: Mob()
{
	m_life = 300;
	m_colorId = 3;
	m_spriteWidth = 3;
	m_spriteHeight = 3;
	m_sprite = new std::string[m_spriteHeight];
	m_sprite[0] = "* *";
	m_sprite[1] = " X ";
	m_sprite[2] = "* *";
}

BossMob::BossMob(const int &x, const int &y)
	: Mob(x, y)
{
	m_life = 300;
	m_colorId = 3;
	m_spriteWidth = 46;
	m_spriteHeight = 21;
	if (m_sprite != NULL)
		delete[] m_sprite;
	m_sprite = new std::string[m_spriteHeight];

	m_sprite[0] =  "   .:'                                  `:.   ";
	m_sprite[1] =  "  ::'                                    `::  ";
	m_sprite[2] =  " :: :.                                  .: :: ";
	m_sprite[3] =  "  `:. `:.             .             .:'  .:'  ";
	m_sprite[4] =  "   `::. `::           !           ::' .::'    ";
	m_sprite[5] =  "       `::.`::.    .' ! `.    .::'.::'        ";
	m_sprite[6] =  "         `:.  `::::'':!:``::::'   ::'         ";
	m_sprite[7] =  "         :'*:::.  .:' ! `:.  .:::*`:          ";
	m_sprite[8] =  "        :: HHH::.   ` ! '   .::HHH ::         ";
	m_sprite[9] =  "       ::: `H TH::.  `!'  .::HT H' :::        ";
	m_sprite[10] =  "       ::..  `THHH:`:   :':HHHT'  ..::       ";
	m_sprite[11] =  "       `::      `T: `. .' :T'      ::'       ";
	m_sprite[12] =  "         `:. .   :         :   . .:'         ";
	m_sprite[13] =  "           `::'               `::'           ";
	m_sprite[14] =  "             :'  .`.  .  .'.  `:             ";
	m_sprite[15] =  "             :' ::.       .:: `:             ";
	m_sprite[16] =  "             :' `:::     :::' `:             ";
	m_sprite[17] =  "              `.  ``     ''  .'              ";
	m_sprite[18] =  "               :`...........':               ";
	m_sprite[19] =  "               ` :`.     .': '               ";
	m_sprite[20] =  "                `:  `\"\"\"'  :'                ";
}

BossMob::BossMob(const BossMob &o)
{
	*this = o;
}

BossMob::~BossMob()
{
	std::cout << "Deleted Mob" << std::endl;
}

BossMob &BossMob::operator=(const BossMob &o)
{
	(void) o;
	return *this;
}

void BossMob::update()
{
	if (m_dead)
		return;
	m_time++;
	if (m_time % 20 == 0 && m_y >= 5)
		shoot();

	m_x = m_sx - 2 + sin(m_time * 0.02) * (Core::getInstance().getScreen().getWidth() / 2 - 25);
    if (m_y < 5)
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

void BossMob::takeDammage(const int &dammage)
{
	if (m_life - dammage <= 0)
	{
		m_dead = true;
		Core::getInstance().getGame()->add(new ParticleSystem(m_x, m_y, 10));
		Core::getInstance().getGame()->add(new ParticleSystem(m_x + m_spriteWidth, m_y, 10));
		Core::getInstance().getGame()->add(new ParticleSystem(m_x + m_spriteWidth, m_y + m_spriteHeight, 10));
		Core::getInstance().getGame()->add(new ParticleSystem(m_x, m_y + m_spriteHeight, 10));
		Core::getInstance().getGame()->add(new ParticleSystem(m_x + m_spriteWidth / 2, m_y + m_spriteHeight / 2, 10));
		Core::getInstance().setWin(true);
		return;
	}
	m_life -= dammage;
	m_gotHit = true;
}

void BossMob::shoot()
{
	for (int i = 0; i < 5; i++)
	{
		AEntity *b = new Bullet(m_id, m_x + i * m_spriteWidth / 5 + 5, m_y + m_spriteHeight / 2, 0, 1, '*', 10);
		Core::getInstance().getGame()->add(b);
	}
}
