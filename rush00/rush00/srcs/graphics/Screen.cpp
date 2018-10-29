/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Screen.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mploux <mploux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 13:57:20 by mploux            #+#    #+#             */
/*   Updated: 2018/03/31 13:57:23 by mploux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Screen.hpp"

Screen::Screen()
	: m_width(0), m_height(0)
{
	initscr();
	noecho();
	curs_set(FALSE);
	keypad(stdscr, TRUE);
	nodelay(stdscr, TRUE);
	start_color();
	init_pair(1, COLOR_WHITE, COLOR_BLACK);
	init_pair(2, COLOR_CYAN, COLOR_BLACK);
	init_pair(3, COLOR_RED, COLOR_BLACK);
	init_pair(4, COLOR_YELLOW, COLOR_BLACK);

	init_pair(5, COLOR_RED, COLOR_BLACK);
	init_pair(6, COLOR_YELLOW, COLOR_BLACK);
	init_pair(7, COLOR_WHITE, COLOR_BLACK);
	init_pair(8, COLOR_WHITE, COLOR_BLACK);

	init_pair(9, COLOR_GREEN, COLOR_BLACK);

	init_pair(10, COLOR_WHITE, COLOR_BLACK);
	init_pair(11, COLOR_WHITE, COLOR_BLACK);
	init_pair(12, COLOR_YELLOW, COLOR_BLACK);
	init_pair(13, COLOR_YELLOW, COLOR_BLACK);
	init_pair(14, COLOR_RED, COLOR_BLACK);
	init_pair(15, COLOR_RED, COLOR_BLACK);

	getmaxyx(stdscr, m_height, m_width);
}

Screen::Screen(const Screen &o)
{
	*this = o;
}

Screen::~Screen()
{
	std::cout << "Deleted Screen" << std::endl;
}

Screen &Screen::operator=(const Screen &o)
{
	if (this != &o)
	{
		m_width = o.m_width;
		m_height = o.m_height;
	}
	return *this;
}

void Screen::closeWindow()
{
	endwin();
}

int Screen::getWidth() const
{
	return m_width;
}

void Screen::setWidth(int width)
{
	m_width = width;
}

int Screen::getHeight() const
{
	return m_height;
}

void Screen::setHeight(int height)
{
	m_height = height;
}
