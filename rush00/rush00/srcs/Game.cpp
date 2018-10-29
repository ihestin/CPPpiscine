/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mploux <mploux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 23:02:44 by mploux            #+#    #+#             */
/*   Updated: 2018/04/01 23:02:44 by mploux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Game.hpp"
#include "Core.hpp"

Game::Game()
	: m_entities(new EntityManager()), m_scrollSpeed(0.3f), m_time(0), m_score(0), m_wave(0), m_boss(false)
{
	m_entities->getEntities()[0] = new Player(
			Core::getInstance().getScreen().getWidth() / 2,
			Core::getInstance().getScreen().getHeight() - 7);
}

Game::Game(const Game &o)
{
	*this = o;
}

Game::~Game()
{
	std::cout << "Deleted Game" << std::endl;
	delete m_entities;
}

Game &Game::operator=(const Game &o)
{
	if (this != &o)
	{
		m_entities = o.m_entities;
		m_boss = o.m_boss;
		m_wave = o.m_wave;
		m_scrollSpeed = o.m_scrollSpeed;
	}
	return *this;
}

void Game::update()
{
	m_time++;
	if ((m_time + 59) % 60 == 0 && !m_boss)
	{
		int max = std::rand() % (Core::getInstance().getScreen().getWidth() / 20) + 2;
		for (int i = 0; i < max; i++)
		{
			addRandomMob(
					(int)((float)(i) / (float)max * Core::getInstance().getScreen().getWidth() + Core::getInstance().getScreen().getWidth() / max / 2),
					-10 - std::rand() % 10);
		}
		m_scrollSpeed += 0.01f;
		m_wave++;
		if (m_wave >= 20)
		{
			if (!m_boss)
			{
				add(new BossMob(Core::getInstance().getScreen().getWidth() / 2 - 20, -50));
				m_boss = true;
			}
		}

	}
	m_entities->update();
}

void Game::render()
{
	m_entities->render();
	attron(COLOR_PAIR(9));
	move(Core::getInstance().getScreen().getHeight() - 1, 5);
	if (m_entities->getEntities()[0] != NULL)
		printw(" -- Life: %03i", m_entities->getEntities()[0]->getLife());

	move(Core::getInstance().getScreen().getHeight() - 1, 18);
	printw(" -- Score: %03i", m_score);

	move(Core::getInstance().getScreen().getHeight() - 1, 32);
	printw(" -- Time: %02im %02is-- ", m_time / 30 / 60, m_time / 30 % 60);
	attron(COLOR_PAIR(1));
}

void Game::input(const int &key)
{
	m_entities->input(key);
}

void Game::add(AEntity *e)
{
	m_entities->add(e);
}

void Game::addRandomMob(const int &x, const int &y)
{
	int r = std::rand() % 3;
	if (r == 0)
		add(new Mob(x, y));
	else if (r == 1)
		add(new ShooterMob(x, y));
	else if (r == 2)
		add(new HealthPack(x, y, 10));
}

void Game::remove(AEntity *e)
{
	m_entities->remove(e);
}

float Game::getScrollSpeed() const
{
    return m_scrollSpeed;
}

void Game::setScrollSpeed(const float& speed)
{
    m_scrollSpeed = speed;
}

int Game::getScore() const
{
	return m_score;
}

void Game::setScore(const int score)
{
	m_score = score;
}

int Game::getTime() const
{
	return m_time;
}

void Game::setTime(const int time)
{
	m_time = time;
}


EntityManager *Game::getEntities() const
{
	return m_entities;
}
