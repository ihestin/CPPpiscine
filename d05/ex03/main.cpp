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
#include "Intern.hpp"


int	main(void){
	
	Bureaucrat		grosMinet("grosMinet",50);
	Form 			*shf;	
	Form 			*rrf;	
	Form 			*ppf;
	Intern 			forintern;	
	grosMinet.setGrade(3);
	ShrubberyCreationForm		sh("Shrubberry");
	RobotomyRequestForm			rr("Robot");
	PresidentialPardonForm		pp("President");

	shf = forintern.makeForm ("Shrubberry","shTarget");
	rrf = forintern.makeForm ("Robot","rrTarget");
	ppf = forintern.makeForm ("President","ppTarget");

	grosMinet.signForm(&sh);
	grosMinet.signForm(&rr);
	grosMinet.signForm(&pp);
	grosMinet.executeForm(sh);
	grosMinet.executeForm(rr);
	grosMinet.executeForm(pp);
	
	grosMinet.signForm(shf);
	grosMinet.signForm(rrf);
	grosMinet.signForm(ppf);
	grosMinet.executeForm(*shf);
	grosMinet.executeForm(*rrf);
	grosMinet.executeForm(*ppf);

	delete shf;
	delete rrf;
	delete ppf;
}
