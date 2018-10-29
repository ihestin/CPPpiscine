/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 17:07:32 by ihestin           #+#    #+#             */
/*   Updated: 2018/04/02 17:07:40 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
#include "Bureaucrat.hpp"

int	main(void){
	try 
	{
		Bureaucrat		titi("titi", 150);
		std::cout << titi;
		Bureaucrat		toto("toto", 1);
		std::cout << toto;
	}
	catch (std::exception & e)
	{
		std::cout << e.what()<<  std::endl;
	}
	try 
	{
		Bureaucrat		titi("titi", 150);
		std::cout << titi;
		Bureaucrat		toto("toto", 250);
		std::cout << toto;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	Bureaucrat		grosMinet("grosMinet",3);
	try
	{
		for (int i = 0; i < 100; i++)
		{
			std::cout << i << "eme increment avec " << grosMinet;
			grosMinet.incrementGrade();
		}
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << grosMinet;
	grosMinet.setGrade(148);
	try
	{
		for (int i = 0; i < 100; i++)
		{
			std::cout << i << "eme increment avec " << grosMinet;
			grosMinet.decrementGrade();
		}
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

try 
	{
		grosMinet.setGrade(148);
		std::cout << grosMinet;
		grosMinet.setGrade(0);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
try 
	{
		grosMinet.setGrade(148);
		std::cout << grosMinet;
		grosMinet.setGrade(160);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
}
