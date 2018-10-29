/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 21:51:46 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/28 21:51:54 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Human.hpp"

int				main(void)
{
	Human		norminet;

	norminet.action("meleeAttack", " titi");
	norminet.action("rangedAttack", " bogues ");
	norminet.action("intimidatingShout", " programme ");
}
