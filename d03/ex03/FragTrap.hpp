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

#include "ClapTrap.hpp"
#include <cstdlib>


class FragTrap : public ClapTrap {

	private:

		static const int 	_vaulthunterCosts;

		void		_initLevel(int level);

	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const & Frag);
		~FragTrap(void);

		FragTrap  		&operator=(FragTrap const &rhs);

		void 			rangedAttack(std::string const & target);
		void 			meleeAttack(std::string const & target) const;
		void 			throwingEggsAttack(std::string const & target);
		void 			shoutAttack(std::string const & target);
		void 			gostAttack(std::string const & target);

		void			vaulthunter_dot_exe(std::string const & target);





};

#endif