/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 19:19:09 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/31 19:20:43 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ISPACEMARINE_H
# define ISPACEMARINE_H

class ISpaceMarine {
	public:
       virtual ~ISpaceMarine() {}
       virtual ISpaceMarine* clone() const = 0;
       virtual void battleCry() const = 0;
       virtual void rangedAttack() const = 0;
       virtual void meleeAttack() const = 0;
};

#endif