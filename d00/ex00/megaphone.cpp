/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 10:50:13 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/26 13:31:26 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main( int argc, char *argv[])
{
	int		i;
	int		j;
	char	c;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	c='a';
	for (i = 1; i < argc; i++)
		for (j = 0; argv[i][j]; j++)
			std::cout <<(char) ((argv[i][j] >= 'a' && argv[i][j] <= 'z') ? (argv[i][j] + ('A' - 'a') ) : argv[i][j]);
	std::cout << std::endl;
	return (0);	
}
