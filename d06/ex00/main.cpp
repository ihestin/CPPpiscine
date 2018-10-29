/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 14:22:55 by ihestin           #+#    #+#             */
/*   Updated: 2018/04/04 14:23:08 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
#include <iomanip>
#include <string>
# include "AsciiConvert.class.hpp"

int 	main(int argc, char const *argv[]){
	if (argc != 2){
		std::cout << "Usage: convert 'chain to convert' ";
		return (1);
	}

	AsciiConvert 	strSrc(argv[1]);

	std::cout << "char: ";
	try 
	{
		char c = static_cast<char>(strSrc);
		if (isprint(c))
			std::cout << '\'' << c << '\'';
		else
			std::cout << "Not displayable";
	}
	catch(std::exception)
	{
		std::cout << "impossible";
	}
	std::cout << std::endl;

	std::cout << "int: ";
	try
	{
		std::cout << static_cast<int>(strSrc);
	}
	catch (std::exception)
	{
		std::cout << "impossible";
	}
	std::cout << std::endl;

	std::cout << std::fixed;
	std::cout.precision(1);
	std::cout << "float: ";
	try 
	{
		std::cout << static_cast<float>(strSrc) << 'f';
	}
	catch (std::exception)
	{
		std::cout << "impossible";
	}
	std::cout << std::endl;

	std::cout << "double: ";
	try 
	{
		std::cout << static_cast<double>(strSrc);
	}
	catch (std::exception)
	{
		std::cout << "impossible";
	}
	std::cout << std::endl;

}
