/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EntityManager.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mploux <mploux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 23:02:24 by mploux            #+#    #+#             */
/*   Updated: 2018/04/01 23:02:24 by mploux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "EntityManager.hpp"

EntityManager::EntityManager()
	: m_index(1)
{
	for (int i = 0; i < ENTITY_COUNT; i++)
		m_entities[i] = NULL;
}

EntityManager::EntityManager(const EntityManager &o)
{
	*this = o;
}

EntityManager::~EntityManager()
{
	std::cout << "Deleted EntityManager" << std::endl;
	for (int i = 0; i < ENTITY_COUNT; i++)
	{
		if (m_entities[i] != NULL)
		{
			delete m_entities[i];
			m_entities[i] = NULL;
		}
	}
}

EntityManager &EntityManager::operator=(const EntityManager &o)
{
	if (this != &o)
	{
		m_index = o.m_index;
		for (int i = 0; i < ENTITY_COUNT; i++)
			m_entities[i] = o.m_entities[i];
	}
	return *this;
}

void EntityManager::add(AEntity *e)
{
	if (e == NULL)
		return;
	if (m_index >= ENTITY_COUNT)
		m_index = 1;
	if (m_entities[m_index] == NULL)
	{
		std::cout << "Added entity: " << m_index << std::endl;
		e->setID(m_index);
		m_entities[m_index++] = e;
	}
	else
	{
		for (int i = 1; i < ENTITY_COUNT; i++)
		{
			if (m_entities[i] == NULL)
			{
				std::cout << "Added entity: " << i << std::endl;
				e->setID(i);
				m_entities[i] = e;
				m_index = i + 1;
				return;
			}
		}
		return;
	}
}

void EntityManager::remove(AEntity *e)
{
	if (e == NULL)
		return;
	if (e->getID() < 1 || e->getID() >= ENTITY_COUNT)
		return;
	if (m_entities[e->getID()] == NULL)
		return;
	int id = e->getID();
	std::cout << "Deleted entity: " << id << std::endl;
	delete m_entities[e->getID()];
	m_entities[id] = NULL;
}

AEntity **EntityManager::getEntities()
{
	return m_entities;
}

void EntityManager::input(int key)
{
	for (int i = 0; i < ENTITY_COUNT; i++)
		if (m_entities[i] != NULL)
			m_entities[i]->input(key);
}

void EntityManager::update()
{
	for (int i = 0; i < ENTITY_COUNT; i++)
	{
		if (m_entities[i] != NULL)
		{
			m_entities[i]->update();
			if (m_entities[i]->isDead())
			{
				if (i > 0 && i < ENTITY_COUNT)
				{
					remove(m_entities[i]);
				}
			}
		}
	}
}

void EntityManager::render()
{
	for (int i = 0; i < ENTITY_COUNT; i++)
		if (m_entities[i] != NULL)
			m_entities[i]->render();
}
