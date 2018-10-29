/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AEntity.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mploux <mploux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 23:57:09 by mploux            #+#    #+#             */
/*   Updated: 2018/03/31 13:57:09 by mploux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENTITY_HPP
# define ENTITY_HPP

# include <iostream>
# include <curses.h>
# include "EntityManager.hpp"

class AEntity
{
protected:
	int			m_id;
	float		m_x;
	float		m_y;
	float		m_sx;
	float		m_sy;
	bool		m_dead;
	int			m_spriteHeight;
	int			m_spriteWidth;
	std::string *m_sprite;
	int			m_colorId;
    int         m_life;
    bool        m_gotHit;
    int         m_time;

public:
	AEntity();
	AEntity(const float &m_x, const float &m_y);
	AEntity(const AEntity &e);
	virtual ~AEntity();

	AEntity &operator=(const AEntity &e);

	virtual void update() = 0;
	virtual void render();
	virtual void input(int key);

	virtual void moveEntity(float dx, float dy, bool collision);
	virtual void shoot();

	AEntity *getCollidingEntity() const;

    virtual void takeDammage(const int &dammage);
    void regenLife(const int &regen);

	int getID() const;

	void setID(int m_id);

	int getX() const;

	void setX(int m_x);

	int getY() const;

	void setY(int m_y);

	int getW() const;

	void setW(int m_w);

	int getH() const;

	void setH(int m_h);

    int getLife() const;

    void setLife(int life);

	bool isDead() const;

	void setDead(bool m_dead);

	const std::string *getSprite() const;

};

#endif
