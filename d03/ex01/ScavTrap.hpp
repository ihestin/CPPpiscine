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

# include <iostream>
#include <cstdlib>

class ScavTrap {

	private:

		unsigned int		_level;
		unsigned int		_hitPoints;
		unsigned int		_maxHitPoints;
		unsigned int		_energyPoints;
		unsigned int		_maxEnergyPoints;
		unsigned int		_meleeAttackDamage;
		unsigned int		_rangedAttackDamage;
		unsigned int		_armorDamageReduction;
		std::string _name;

		void		_initLevel(int level);



	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & Scav);
		~ScavTrap(void);

		ScavTrap  		&operator=(ScavTrap const &rhs);
		int 			getLevel( void ) const;
		std::string		getName( void ) const;
		void			displayScore( void ) const;

		void 			rangedAttack(std::string const & target);
		void 			meleeAttack(std::string const & target);

		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		void			challengeNewcomer(void) const;


};

#endif
