/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 18:25:23 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/28 18:25:28 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMAN_H
# define HUMAN_H

#include <iostream>
#include "Brain.hpp"


class Human {

private:
const Brain _hBrain;

public:

	Human(void);
	~Human(void);

	std::string	identify( void ) const;
	const Brain &getBrain() const;
};



#endif
