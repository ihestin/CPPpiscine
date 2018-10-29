/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HealthPack.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mploux <mploux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 23:00:17 by mploux            #+#    #+#             */
/*   Updated: 2018/04/01 23:00:17 by mploux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HEATHPACK_HPP
# define HEATHPACK_HPP

# include <iostream>
# include "Game.hpp"
# include "AEntity.hpp"

class HealthPack : public AEntity
{
private:
	int m_regen;

public:
	HealthPack();

	HealthPack(const int &x, const int &y, const int &regen);

	HealthPack(const HealthPack &o);

	virtual ~HealthPack();

	HealthPack &operator=(const HealthPack &o);

	void update();

	void render();
};

#endif
