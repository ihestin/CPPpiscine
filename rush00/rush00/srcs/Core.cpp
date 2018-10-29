/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Core.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mploux <mploux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 23:02:42 by mploux            #+#    #+#             */
/*   Updated: 2018/04/01 23:02:42 by mploux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Core.hpp"

Core Core::m_instance = Core();

Core::Core()
	: m_running(true), m_game(NULL), m_dead(false), m_win(false)
{
	std::srand(time(0));

	m_gameTitle[0] = "     _______.___________.    ___      .______          _  _     ___  ";
	m_gameTitle[1] = "    /       |           |   /   \\     |   _  \\        | || |   |__ \\ ";
	m_gameTitle[2] = "   |   (----`---|  |----`  /  ^  \\    |  |_)  |       | || |_     ) |";
	m_gameTitle[3] = "    \\   \\       |  |      /  /_\\  \\   |      /        |__   _|   / / ";
	m_gameTitle[4] = ".----)   |      |  |     /  _____  \\  |  |\\  \\----.      | |    / /_ ";
	m_gameTitle[5] = "|_______/       |__|    /__/     \\__\\ | _| `._____|      |_|   |____|";

	m_deadTitle[0] = "____    ____  ______    __    __      _______   __   _______  _______  ";
	m_deadTitle[1] = "\\   \\  /   / /  __  \\  |  |  |  |    |       \\ |  | |   ____||       \\ ";
	m_deadTitle[2] = " \\   \\/   / |  |  |  | |  |  |  |    |  .--.  ||  | |  |__   |  .--.  |";
	m_deadTitle[3] = "  \\_    _/  |  |  |  | |  |  |  |    |  |  |  ||  | |   __|  |  |  |  |";
	m_deadTitle[4] = "    |  |    |  `--'  | |  `--'  |    |  '--'  ||  | |  |____ |  '--'  |";
	m_deadTitle[5] = "    |__|     \\______/   \\______/     |_______/ |__| |_______||_______/ ";

	m_winTitle[0] = "____    ____  ______    __    __     ____    __    ____  ______   .__   __. ";
	m_winTitle[1] = "\\   \\  /   / /  __  \\  |  |  |  |    \\   \\  /  \\  /   / /  __  \\  |  \\ |  | ";
	m_winTitle[2] = " \\   \\/   / |  |  |  | |  |  |  |     \\   \\/    \\/   / |  |  |  | |   \\|  | ";
	m_winTitle[3] = "  \\_    _/  |  |  |  | |  |  |  |      \\            /  |  |  |  | |  . `  | ";
	m_winTitle[4] = "    |  |    |  `--'  | |  `--'  |       \\    /\\    /   |  `--'  | |  |\\   | ";
	m_winTitle[5] = "    |__|     \\______/   \\______/         \\__/  \\__/     \\______/  |__| \\__| ";

	for (int i = 0; i < STARS_COUNT; i++)
	{
		m_stars[i][0] = (float) (std::rand() % m_screen.getWidth());
		m_stars[i][1] = (float) (std::rand() % m_screen.getHeight());
	}
}

Core::Core(const Core &o)
{
	*this = o;
}

Core::~Core()
{
	std::cout << "Deleted Core" << std::endl;
}

Core &Core::operator=(const Core &o)
{
	if (this != &o)
	{
		m_running = o.m_running;
		m_game = o.m_game;
		m_screen = o.m_screen;
	}
	return *this;
}

void Core::start()
{
	clock_t beforeTime = clock();
	while (m_running)
	{
		clock_t currentTime = clock();
		int key;
		while ((key = getch()) != ERR)
		{
			if (key == 27)
				m_running = false;

			if (key == 10)
			{
				if (m_game != NULL)
					delete m_game;
				m_game = new Game();
				m_dead = false;
				m_win = false;
			}

			if (m_game != NULL)
				m_game->input(key);
		}

		if (currentTime - beforeTime > 1000000.0 / 30.0)
		{
			update();

			erase();
			box(stdscr, '_', '|');
			render();
			refresh();

			beforeTime = clock();
		}
	}
	std::cout << "Stopping" << std::endl;
	m_screen.closeWindow();
}

void Core::update()
{
	if (m_game == NULL || m_dead || m_win)
	{

	}
	else
	{
		if (m_game->getEntities()->getEntities()[0]->isDead())
		{
			m_dead = true;
		}
		for (int i = 0; i < STARS_COUNT; i++)
		{
			m_stars[i][1] += m_game->getScrollSpeed() * 0.5;
			if (m_stars[i][1] >= m_screen.getHeight() - 1)
				m_stars[i][1] = 1;
		}
		m_game->update();
	}
}

void Core::render()
{
	for (int i = 0; i < STARS_COUNT; i++)
	{
		move((int)m_stars[i][1], (int)m_stars[i][0]);
		addch('.');
	}
	if (m_game == NULL || m_dead || m_win)
	{
		if (m_dead)
		{
			int textWidth = (int) m_deadTitle[0].length();
			int screenWidth = m_screen.getWidth();
			int x = screenWidth / 2 - textWidth / 2;
			int y = m_screen.getHeight() / 2 - 9;

			for (int i = 0; i < 6; i++)
			{
				attron(COLOR_PAIR(10 + i));
				move(y + i, x);
				printw(m_deadTitle[i].c_str());
			}
			attron(COLOR_PAIR(1));
			move(m_screen.getHeight() / 2 - 2, m_screen.getWidth() / 2 - 12);
			printw("Score: %i   Time: %im %is", m_game->getScore(), m_game->getTime() / 30 / 60, m_game->getTime() / 30 % 60);

			move(m_screen.getHeight() / 2, m_screen.getWidth() / 2 - 12);
			printw("Press enter to restart !");
		}
		else if (m_win)
		{
			int textWidth = (int) m_winTitle[0].length();
			int screenWidth = m_screen.getWidth();
			int x = screenWidth / 2 - textWidth / 2;
			int y = m_screen.getHeight() / 2 - 9;

			for (int i = 0; i < 6; i++)
			{
				attron(COLOR_PAIR(10 + i));
				move(y + i, x);
				printw(m_winTitle[i].c_str());
			}
			attron(COLOR_PAIR(1));
			move(m_screen.getHeight() / 2 - 2, m_screen.getWidth() / 2 - 12);
			printw("Score: %i   Time: %im %is", m_game->getScore(), m_game->getTime() / 30 / 60, m_game->getTime() / 30 % 60);

			move(m_screen.getHeight() / 2, m_screen.getWidth() / 2 - 12);
			printw("Press enter to restart !");
		}
		else
		{
			int textWidth = (int) m_gameTitle[0].length();
			int screenWidth = m_screen.getWidth();
			int x = screenWidth / 2 - textWidth / 2;
			int y = m_screen.getHeight() / 2 - 9;

			for (int i = 0; i < 6; i++)
			{
				attron(COLOR_PAIR(10 + i));
				move(y + i, x);
				printw(m_gameTitle[i].c_str());
			}
			attron(COLOR_PAIR(1));

			move(m_screen.getHeight() / 2, m_screen.getWidth() / 2 - 12);
			printw("Press enter to play !");
		}

	}
	else
		m_game->render();
}

Core &Core::getInstance()
{
	return m_instance;
}

const Screen &Core::getScreen() const
{
	return m_screen;
}

void Core::setScreen(const Screen &screen)
{
	m_screen = screen;
}

Game *Core::getGame()
{
	return m_game;
}

void Core::setGame(Game *game)
{
	if (m_game != NULL)
		delete m_game;
	m_game = game;
}

void Core::setWin(bool win)
{
	m_win = win;
}
