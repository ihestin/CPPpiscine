/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 17:45:55 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/31 17:46:02 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_H
# define SUPERMUTANT_H

# include <iostream>
#include "Enemy.hpp"

class SuperMutant : public Enemy {


	public:
		SuperMutant(void);
		SuperMutant(SuperMutant const & rhs);
		~SuperMutant(void);
		using Enemy::operator=;

		void takeDamage(int dam);
};


#endif


