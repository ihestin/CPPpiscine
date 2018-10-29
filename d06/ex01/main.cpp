/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 16:36:44 by ihestin           #+#    #+#             */
/*   Updated: 2018/04/04 16:36:51 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <time.h>
#include "serialize.hpp"

Data 	* deserialize(void * buf)
{
	Data 	*data = new Data;

	data->s1.assign(reinterpret_cast<char *>(buf), 8);
	data->n = *reinterpret_cast<int *>(&reinterpret_cast<char *>(buf)[8]);
	data->s2.assign(&reinterpret_cast<char *>(buf)[12], 8);

	return (data);
}

void * serialize(void)
{
	char 	*dataSer = new char[21];
	char 	alpha_rd[] = "abcdefghijklmnopqrstuvwxyz0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int 	nb;
	char	*ptr;
	
	srand(time(0));
	for (int i = 0; i < 8; ++i)
		dataSer[i] = alpha_rd[rand() % 62];
	nb = rand();	
// std::cout << "test nb generer "<< nb << std::endl;
	ptr = reinterpret_cast<char *>( &nb);
	for (int i = 0; i < 4; i++)
		dataSer[i + 8] = ptr[i];
	for (int i = 12; i < 20; ++i)
		dataSer[i] = alpha_rd[rand() % 62];
	return (reinterpret_cast<void *>(dataSer));
}

int main(void)
{
	void	*buffer;
	Data	*Deser;

	buffer = serialize();

	Deser = deserialize(buffer);
	std::cout << "First chain : " << Deser->s1 << std::endl;
	std::cout << "Integer : " << Deser->n << std::endl;
	std::cout << "Second chain : "<< Deser->s2 << std::endl;

	return(0);
}