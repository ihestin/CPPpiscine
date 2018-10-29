/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EntityManager.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mploux <mploux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 23:00:12 by mploux            #+#    #+#             */
/*   Updated: 2018/04/01 23:00:12 by mploux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ENTITYMANAGER_HPP
# define ENTITYMANAGER_HPP

# include <iostream>

# include "AEntity.hpp"

# define ENTITY_COUNT 128

class AEntity;

class EntityManager
{
private:
	AEntity	*m_entities[ENTITY_COUNT];
	int		m_index;

public:
	EntityManager();

	EntityManager(const EntityManager &o);

	virtual ~EntityManager();

	EntityManager &operator=(const EntityManager &o);

	void add(AEntity *e);
	void remove(AEntity *e);

	AEntity **getEntities();

	void input(int key);
	void update();
	void render();
};

#endif
