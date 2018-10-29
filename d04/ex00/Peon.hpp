/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 14:07:46 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/31 14:07:53 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_H
# define PEON_H

# include <iostream>
#include "Victim.hpp"

class Peon : public Victim {

	private:

	protected:


	public:
		Peon(void);
		Peon(std::string name);
		Peon(Peon const & rhs);
		~Peon(void);

		Peon  		&operator=(Peon const &rhs);

};

std::ostream & operator<<( std::ostream & o, Peon const & rhs);


#endif
