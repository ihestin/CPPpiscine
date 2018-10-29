/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 21:13:15 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/31 21:13:19 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_H
# define ASSAULTTERMINATOR_H

#include "ISpaceMarine.hpp"

# include <iostream>

class AssaultTerminator : public ISpaceMarine {

	public:
		AssaultTerminator(void);
		AssaultTerminator(AssaultTerminator const & rhs);
		~AssaultTerminator(void);

		AssaultTerminator  		&operator=(AssaultTerminator const &rhs);
	void	battleCry() const;
	void	rangedAttack() const;
	void	meleeAttack() const;
	ISpaceMarine* clone( void ) const;

};



#endif
