/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 21:50:49 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/28 21:51:41 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"


void	Human::meleeAttack(std::string const & target)
{
	std::cout << " meleeAttack : " + target << std::endl;
}

void	Human::rangedAttack(std::string const & target)
{
	std::cout << " rangedAttack : " + target << std::endl;

}

void	Human::intimidatingShout(std::string const & target)
{
	std::cout << "INTIMIDATION SHOUT : " + target << std::endl;
}

void Human::action(std::string const & action_name, std::string const & target)
{
	void (Human::*attacks[3])(const std::string &) = {&Human::meleeAttack,
							&Human::rangedAttack, &Human::intimidatingShout};
	std::string attackNames[3] = {"meleeAttack", "rangedAttack", "intimidatingShout"};

	for (int i = 0; i < 3; i++)
	{
		if (attackNames[i] == action_name)
			(this->*attacks[i])(target);
	}
}
