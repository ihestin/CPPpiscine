/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mploux <mploux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 23:02:30 by mploux            #+#    #+#             */
/*   Updated: 2018/04/01 23:02:31 by mploux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Player.hpp"
#include "Core.hpp"

Player::Player()
	: AEntity()
{
	m_colorId = 2;
	m_spriteWidth = 3;
	m_spriteHeight = 3;
	m_sprite = new std::string[m_spriteHeight];
	m_sprite[0] = " * ";
	m_sprite[1] = "/ \\";
	m_sprite[2] = "---";
    m_life = 100;
}

Player::Player(const int &x, const int &y)
	: AEntity(x, y)
{
	m_colorId = 2;
	m_spriteWidth = 5;
	m_spriteHeight = 3;
	m_sprite = new std::string[m_spriteHeight];
	m_sprite[0] = " /*\\";
	m_sprite[1] = "{@-@}";
	m_sprite[2] = "/\" \"\\";
    m_life = 100;
}

Player::Player(const Player &o)
{
	*this = o;
}

Player::~Player()
{
	std::cout << "Deleted Player" << std::endl;
}

Player &Player::operator=(const Player &o)
{
	if (this != &o)
	{

	}
	return *this;
}

void Player::input(int key)
{
	if (key == KEY_LEFT)
        m_left = true;
	if (key == KEY_RIGHT)
        m_right = true;
	if (key == KEY_UP)
		m_up = true;
	if (key == KEY_DOWN)
		m_down = true;
	if (key == ' ')
		m_shoot = true;
}

void Player::update()
{
    if (m_left)
        moveEntity(-1, 0, true);
    if (m_right)
        moveEntity(1, 0, true);
    if (m_up)
        moveEntity(0, -1, true);
    if (m_down)
        moveEntity(0, 1, true);
    if (m_shoot)
        shoot();
    if (m_gotHit)
    {
        m_time++;
        m_colorId = 2;
        if (m_time % 6 < 3)
            m_colorId = 3;
        if (m_time > 20)
        {
            m_gotHit = false;
            m_time = 0;
            m_colorId = 2;
        }
    }
    if (m_dead)
        m_colorId = 3;
    m_left = false;
    m_right = false;
    m_up = false;
    m_down = false;
    m_shoot = false;
}

void Player::shoot()
{
	AEntity *b = new Bullet(m_id, m_x + 2, m_y, 0, -1, '*', 10);
	Core::getInstance().getGame()->add(b);
}
