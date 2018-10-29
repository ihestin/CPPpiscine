/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 20:54:39 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/31 20:55:33 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_H
# define TACTICALMARINE_H

#include "ISpaceMarine.hpp"

# include <iostream>

class TacticalMarine : public ISpaceMarine {

	public:
		TacticalMarine(void);
		TacticalMarine(TacticalMarine const & rhs);
		~TacticalMarine(void);

		TacticalMarine  		&operator=(TacticalMarine const &rhs);
	void	battleCry() const;
	void	rangedAttack() const;
	void	meleeAttack() const;
	ISpaceMarine* clone( void ) const;

};



#endif
