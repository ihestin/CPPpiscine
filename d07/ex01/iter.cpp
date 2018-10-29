/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 20:18:12 by ihestin           #+#    #+#             */
/*   Updated: 2018/04/04 20:38:00 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>

template < typename T>
void iter (T * array, unsigned int len, void( *func)(T))
{
	for (unsigned int i = 0; i < len; i++)
		func(array[i]);

}

template < typename T>
void prt (T arg1)
{
	std::cout << arg1 << std::endl;
}

int 	main(void)
{
	char  	ctab[3] = { '1', '2', '3' };
	int		itab[4] = {4,5,6,7};

	std::cout <<  "test on Array of caracter" << std::endl;
	iter(ctab,3,&prt);
	std::cout <<  "test on Array of integer" << std::endl;
	iter(itab,4,&prt);

}
