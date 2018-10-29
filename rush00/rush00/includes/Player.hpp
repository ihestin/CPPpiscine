/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mploux <mploux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 23:00:35 by mploux            #+#    #+#             */
/*   Updated: 2018/04/01 23:00:42 by mploux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PLAYER_HPP
# define PLAYER_HPP

# include <iostream>

# include "Bullet.hpp"
# include "AEntity.hpp"

class AEntity;

class Player : public AEntity
{
private:
	bool m_left;
	bool m_right;
	bool m_up;
	bool m_down;
	bool m_shoot;

public:
	Player();

	Player(const int &x, const int &y);

	Player(const Player &o);

	virtual ~Player();

	Player &operator=(const Player &o);

	void input(int key);
	void update();
	void shoot();
};

#endif
