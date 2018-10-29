/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 14:05:03 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/30 14:05:45 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"
#include <cstdlib>

class ScavTrap : public ClapTrap {

	private:
		void		_initLevel(int level);

	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & Scav);
		~ScavTrap(void);

		ScavTrap  		&operator=(ScavTrap const &rhs);

		void 			rangedAttack(std::string const & target);
		void 			meleeAttack(std::string const & target) const;
		void			challengeNewcomer(void) const;


};

#endif
