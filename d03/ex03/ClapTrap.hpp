/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 15:15:05 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/30 15:17:23 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

class ClapTrap {

	private:
		void		_initLevel(int level);

	protected:

		unsigned int		_level;
		unsigned int		_hitPoints;
		unsigned int		_maxHitPoints;
		unsigned int		_energyPoints;
		unsigned int		_maxEnergyPoints;
		unsigned int		_meleeAttackDamage;
		unsigned int		_rangedAttackDamage;
		unsigned int		_armorDamageReduction;
		std::string _name;

	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & Clap);
		~ClapTrap(void);

		ClapTrap  		&operator=(ClapTrap const &rhs);
		int 			getLevel( void ) const;
		std::string		getName( void ) const;
		void			displayScore( void ) const;

		void 			rangedAttack(std::string const & target);
		void 			meleeAttack(std::string const & target) const;

		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);



};



#endif
