/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 16:53:21 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/30 16:53:49 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_H
# define NINJATRAP_H

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap {

	private:
		void		_initLevel(int level);

	public:
		NinjaTrap(void);
		NinjaTrap(std::string name);
		NinjaTrap(NinjaTrap const & src);
		~NinjaTrap(void);

		NinjaTrap  		&operator=(NinjaTrap const &rhs);

		void 			rangedAttack(std::string const & target);
		void 			meleeAttack(std::string const & target) const;

		void			ninjaShoebox(NinjaTrap const &Attack );
		void			ninjaShoebox(ClapTrap const &Attack );
		void			ninjaShoebox(FragTrap const &Attack );
		void			ninjaShoebox(ScavTrap const &Attack );


};

#endif
