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
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"


int	main(void){
	
	Bureaucrat		grosMinet("grosMinet",50);
	ShrubberyCreationForm			F49t50("~");
	ShrubberyCreationForm			F2("./");
	try
	{
		std::cout << F49t50 << grosMinet;
		grosMinet.signForm(&F49t50);
		std::cout << F49t50;
		F49t50.execute( grosMinet );
		std::cout <<std::endl;

		std::cout << "Formulaire F2" << F2 << grosMinet;
		grosMinet.executeForm(F2);
		std::cout << grosMinet << F2 << std::endl;
		grosMinet.signForm(&F2);
		grosMinet.executeForm(F2);
		std::cout << grosMinet << F2 << std::endl;
		
		grosMinet.setGrade(145);
		grosMinet.executeForm(F2);
		
		std::cout << F2 << grosMinet;
		std::cout << std::endl << "Not Go out of Bureacrat with exception"<< std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Exeption B1" <<e.what() << std::endl;
	}
	
	grosMinet.setGrade(3);
	ShrubberyCreationForm		sh("Shrubberry");
	RobotomyRequestForm			rr("Robot");
	PresidentialPardonForm		pp("President");

	grosMinet.signForm(&sh);
	grosMinet.signForm(&rr);
	grosMinet.signForm(&pp);
	grosMinet.executeForm(sh);
	grosMinet.executeForm(rr);
	grosMinet.executeForm(pp);

}
