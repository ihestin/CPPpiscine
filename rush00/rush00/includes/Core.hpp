/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Core.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mploux <mploux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 23:00:09 by mploux            #+#    #+#             */
/*   Updated: 2018/04/01 23:00:10 by mploux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CORE_HPP
# define CORE_HPP

# include <iostream>
# include <fstream>
# include <unistd.h>
# include <ctime>

# include "Screen.hpp"
# include "Game.hpp"

# define STARS_COUNT 50

class Core
{
private:
	static Core 	m_instance;
	bool			m_running;
	Screen			m_screen;
	Game			*m_game;
	std::string		m_gameTitle[6];
	std::string		m_deadTitle[6];
	std::string		m_winTitle[6];
	bool			m_dead;
	bool			m_win;
	float			m_stars[STARS_COUNT][2];

public:
	Core();

	Core(const Core &o);

	virtual ~Core();

	Core &operator=(const Core &o);

	void start();
	void update();
	void render();

	static Core &getInstance();

	const Screen &getScreen() const;

	void setScreen(const Screen &screen);

	Game *getGame();

	void setGame(Game *game);

	void setWin(bool win);
};

#endif
