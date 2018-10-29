/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 13:16:07 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/27 14:23:41 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H

#include <iostream>
#include <string>

class Pony {

private:

	int			_age;
	std::string	_color;

public:
	Pony( std::string color );
	~Pony( void );

	void 	setAge(int age);
	int		getAge(void);

};

#endif
