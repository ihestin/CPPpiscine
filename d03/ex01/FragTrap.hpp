/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 18:31:33 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/29 18:31:36 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include <iostream>
#include <cstdlib>

class FragTrap {

	private:

		static const int 	_vaulthunterCosts;

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
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const & Frag);
		~FragTrap(void);

		FragTrap  		&operator=(FragTrap const &rhs);
		int 			getLevel( void ) const;
		std::string		getName( void ) const;
		void			displayScore( void ) const;

		void 			rangedAttack(std::string const & target);
		void 			meleeAttack(std::string const & target);
		void 			throwingEggsAttack(std::string const & target);
		void 			shoutAttack(std::string const & target);
		void 			gostAttack(std::string const & target);

		void			vaulthunter_dot_exe(std::string const & target);

		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);




};

#endif