/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 17:13:53 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/31 17:14:04 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_H
# define RADSCORPION_H

# include <iostream>
#include "Enemy.hpp"

class RadScorpion : public Enemy {


	public:
		RadScorpion(void);
		RadScorpion(RadScorpion const & rhs);
		~RadScorpion(void);
		using Enemy::operator=;




};


#endif

