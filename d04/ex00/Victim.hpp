/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 14:09:29 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/31 14:09:36 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_H
# define VICTIM_H

# include <iostream>

class Victim {

	private:

	protected:
		std::string 	_name; 

	public:
		Victim(void);
		Victim(std::string name);
		Victim(Victim const & rhs);
		~Victim(void);

		Victim  		&operator=(Victim const &rhs);
		std::string		getName( void ) const;

};

std::ostream & operator<<( std::ostream & o, Victim const & rhs);


#endif
