/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Particle.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mploux <mploux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 23:00:21 by mploux            #+#    #+#             */
/*   Updated: 2018/04/01 23:10:37 by mploux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARTICLE_HPP
# define PARTICLE_HPP


# include "AEntity.hpp"

class Particle : public AEntity
{
public:
	char    m_states[4];
	char    m_state;
	float   m_vx;
	float   m_vy;

public:
	Particle();

	Particle(const int &x, const int &y, const float &vx, const float &vy);

	Particle(const Particle &o);

	virtual ~Particle();

	Particle &operator=(const Particle &o);

	void update();
	void render();
};


#endif
