/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sedfirst.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 21:39:58 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/28 21:40:04 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

int main( int argc, char *argv[] ){
	if (argc != 4 || !argv[1][0] || !argv[2][0] )
	{
		std::cout << "usage: "  << "filename stringReplace Bystring" << std::endl;
		return(1);
	}

	std::string stri(argv[2]);
	std::string strr(argv[3]);

	if (stri.compare(strr) == 0)
	{
		std::cout << "usage: "  << "filename stringReplace Bystring" << std::endl;
		return(1);		
	}
	
	std::string ficold(argv[1]);
	std::string ficnew(ficold + "rep");
	std::string text;
	std::ifstream fdi(ficold);
	std::ofstream fdo(ficnew);
	std::stringstream buffer;
	size_t	i (0);
	if (!fdi.is_open())
	{
		std::cout << "The file " << ficold << " cannot be open" << std::endl;
			exit(2);
	}
	buffer << fdi.rdbuf();
	fdi.close();
	text = buffer.str();
	while ( (i = text.find(stri, i)) != std::string::npos)
	{
		text.replace(i, stri.length(), strr);
		i = i + strr.length();
	}
	if (!fdo.is_open())
	{
		std::cout << "Couldn't write to the file." << std::endl;
		exit(1);
	}
	fdo << text;
	fdo.close();
}
