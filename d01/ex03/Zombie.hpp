/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 11:15:35 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/28 11:15:39 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie {

private:

	std::string		_name;
	std::string		_type;

public:

	Zombie(std::string name, std::string type);
	Zombie(void);
	~Zombie(void);

	void	announce(void) const;
	void	setName(std::string name);
	void	setType(std::string type);
};



#endif