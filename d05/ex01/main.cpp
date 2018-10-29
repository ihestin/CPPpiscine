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
#include "Form.hpp"

int	main(void){
	try 
	{
		Form			F25t50("F25t50", 25 , 55);
		std::cout << F25t50;
		Form			F00T150("F00T150",00 , 150);
		std::cout << F00T150;
	}
	catch (std::exception & e)
	{
		std::cout << e.what()<<  std::endl;
	}

	try 
	{
		Form			F25tx240("F25tx240", 25 , 240);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	Bureaucrat		grosMinet("grosMinet",50);
	Form			F49t50("F49t50", 49 , 55);
	try
	{
		std::cout << F49t50 << grosMinet;
		grosMinet.signForm(&F49t50);
		std::cout << F49t50;
		grosMinet.setGrade(10);
		std::cout << grosMinet;
		grosMinet.signForm(&F49t50);
		std::cout << F49t50 << grosMinet;
		std::cout << std::endl << "Not Go out of Bureacrat with exception"<< std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

}
