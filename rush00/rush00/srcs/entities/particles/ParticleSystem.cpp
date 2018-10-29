/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ParticleSystem.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mploux <mploux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 23:01:14 by mploux            #+#    #+#             */
/*   Updated: 2018/04/01 23:01:19 by mploux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ParticleSystem.hpp"
#include "Core.hpp"

ParticleSystem::ParticleSystem()
	: AEntity(), m_count(0)
{

}

ParticleSystem::ParticleSystem(const int &x, const int &y, const int &count)
	: AEntity(x, y), m_count(count)
{
	for (int i = 0; i < m_count; i++)
	{
		float vx = ((float) std::rand() / (float) RAND_MAX) * 2.0f - 1.0f;
		float vy = ((float) std::rand() / (float) RAND_MAX) * 2.0f - 1.0f;
		Core::getInstance().getGame()->add(new Particle((int) m_x, (int) m_y, vx, vy));
	}
}

ParticleSystem::ParticleSystem(const ParticleSystem &o)
{
	*this = o;
}

ParticleSystem::~ParticleSystem()
{
}

ParticleSystem &ParticleSystem::operator=(const ParticleSystem &o)
{
	(void) o;
	return *this;
}

void ParticleSystem::update()
{
	if (m_dead)
		return;
	m_time++;
	if (m_time > 5)
		m_dead = true;

}

void ParticleSystem::render()
{

}
