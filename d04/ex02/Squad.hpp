/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 19:28:10 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/31 19:29:45 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_H
# define SQUAD_H

# include <iostream>
#include "ISquad.hpp"


class Squad : public ISquad {

typedef struct s_units
{
	ISpaceMarine	*instance;
	s_units			*next;
}					t_units;

	private:
		int 		_count;
		t_units		*_units;

	public:
		Squad(void);
		Squad( Squad const & rhs );
		~Squad(void);

		Squad  			&operator=(Squad const &rhs);
		int 			getCount( void ) const;
		ISpaceMarine*	getUnit( int index ) const;
		int				push( ISpaceMarine* sm );

};




#endif
