/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mploux <mploux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 23:00:14 by mploux            #+#    #+#             */
/*   Updated: 2018/04/01 23:00:15 by mploux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef GAME_HPP
# define GAME_HPP

# include <iostream>

# include "AEntity.hpp"
# include "Mob.hpp"
# include "Player.hpp"
# include "EntityManager.hpp"
# include "ShooterMob.hpp"
# include "BossMob.hpp"

class EntityManager;

class Game
{
private:
	EntityManager 	*m_entities;
	float			m_scrollSpeed;
	int				m_time;
	int				m_score;
	int				m_wave;
	bool			m_boss;

public:
	Game();

	Game(const Game &o);

	virtual ~Game();

	Game &operator=(const Game &o);

	void update();
	void render();
	void input(const int &key);

	void add(AEntity *e);
	void remove(AEntity *e);

	float getScrollSpeed() const;
	void setScrollSpeed(const float& speed);

	int getScore() const;
	void setScore(const int speed);

	int getTime() const;
	void setTime(const int speed);

	void addRandomMob(const int &x, const int &y);

	EntityManager *getEntities() const;
};

#endif
