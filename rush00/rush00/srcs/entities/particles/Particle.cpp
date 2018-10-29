/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Particle.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mploux <mploux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 23:01:08 by mploux            #+#    #+#             */
/*   Updated: 2018/04/01 23:17:08 by mploux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Particle.hpp"
#include "Core.hpp"

Particle::Particle()
	: AEntity(), m_vx(1), m_vy(0)
{
	m_states[0] = 'X';
	m_states[1] = 'x';
	m_states[2] = ',';
	m_states[3] = '.';
}

Particle::Particle(const int &x, const int &y, const float &vx, const float &vy)
	: AEntity(x, y), m_vx(vx), m_vy(vy)
{
	m_states[0] = 'X';
	m_states[1] = 'x';
	m_states[2] = ',';
	m_states[3] = '.';
}

Particle::Particle(const Particle &o)
{
	*this = o;
}

Particle::~Particle()
{
}

Particle &Particle::operator=(const Particle &o)
{
	if (this != &o)
	{

	}
	return *this;
}

void Particle::update()
{
	if (m_dead)
		return;
	if (m_time >= 8)
	{
		m_dead = true;
		return;
	}
	m_state = m_states[m_time / 2];
	m_time++;
	m_y += m_vy;
	m_x += m_vx;
}

void Particle::render()
{
	if (m_dead)
		return;
	if (m_y < 1 || m_x < 1 ||
		m_x > Core::getInstance().getScreen().getWidth() - 1 || m_y > Core::getInstance().getScreen().getHeight() - 1)
		return;
	attron(COLOR_PAIR(4 + m_time / 2));
	move((int) m_y, (int) m_x);
	addch(m_state);
	attron(COLOR_PAIR(1));
}
