/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ParticleSystem.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mploux <mploux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 23:00:29 by mploux            #+#    #+#             */
/*   Updated: 2018/04/01 23:12:46 by mploux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARTICLESYSTEM_HPP
# define PARTICLESYSTEM_HPP

# include <cstdlib>

# include "Game.hpp"
# include "Particle.hpp"
# include "AEntity.hpp"

class ParticleSystem : public AEntity
{
public:
	int     m_count;

public:
	ParticleSystem();

	ParticleSystem(const int &x, const int &y, const int &count);

	ParticleSystem(const ParticleSystem &o);

	virtual ~ParticleSystem();

	ParticleSystem &operator=(const ParticleSystem &o);

	void update();
	void render();
};

#endif
