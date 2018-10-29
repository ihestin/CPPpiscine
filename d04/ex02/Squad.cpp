/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 19:28:50 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/31 19:30:32 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"


Squad::Squad(void) : _count(0), _units(0) {
}


Squad::Squad(Squad const &rhs) {
		*this = rhs;
}

Squad::~Squad(void) {
	t_units	*tmp = _units;
	while (tmp){
		delete tmp->instance;
		tmp = _units->next;
		delete _units;
		_units = tmp;
	}
}	


Squad		& Squad::operator=(Squad const &rhs) {
	int 	i;
	t_units	*tmp;
	this->_count = rhs.getCount();
	this->_units = 0;
	if (this->_count == 0)
		return(*this);
	this->_units = new(t_units);
	this->_units->instance = rhs.getUnit( 0);
	this->_units->next = 0;
	tmp  = this->_units;
	for (i = 1; i < this->_count; i++)
	{
		tmp -> next =  new(t_units);
		tmp = tmp -> next;
		tmp->instance = rhs.getUnit( i );
		tmp -> next  = 0;
	}
	return (*this);
}

int 		Squad::getCount( void ) const {
		return _count;
}
int		Squad::push( ISpaceMarine* sm )
{
	t_units	*tmp ;
	int 	i;

	if (sm == NULL)
		return (-1);
	if (_count == 0){
		_units = new (t_units);
		( _units-> instance) = sm;
		_units -> next = 0;
		++_count;
		return (1);
	}
	tmp = _units;
	for (i = 0; i < _count - 1; i++)
	{
		if ((tmp -> instance) == sm)
			return (_count);
		tmp = tmp->next;
	}
	if ((tmp -> instance) == sm)
		return (_count);
	(tmp -> next)  = new(t_units);
	tmp = tmp->next;
	(tmp -> instance) = sm;
	tmp -> next = 0;
	_count++;
	return _count;
}

ISpaceMarine*	Squad::getUnit( int index ) const
{
	t_units	*tmp = _units;
	int 	i;

	if (index > _count)
		return(0);
	
	for (i = 0; i < index; i++)
		tmp = tmp->next;

	return (tmp->instance);
}
