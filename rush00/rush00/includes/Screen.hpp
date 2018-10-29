/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Screen.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mploux <mploux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 13:57:16 by mploux            #+#    #+#             */
/*   Updated: 2018/03/31 13:57:18 by mploux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCREEN_HPP
# define SCREEN_HPP

# include <iostream>
# include <curses.h>


class Screen
{
private:
	int	m_width;
	int m_height;

public:
	Screen();

	Screen(const Screen &o);

	virtual ~Screen();

	Screen &operator=(const Screen &o);

	void closeWindow();

	int getWidth() const;

	void setWidth(int width);

	int getHeight() const;

	void setHeight(int height);
};

std::ostream &operator<<(std::ostream &s, const Screen &o);

#endif
