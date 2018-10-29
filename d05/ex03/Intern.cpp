/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 22:05:06 by ihestin           #+#    #+#             */
/*   Updated: 2018/04/03 22:05:34 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


Intern::Intern(void)  {}


Intern::~Intern(void) {
}

Form *Intern::makeForm(std::string formName, std::string target) {
	Form *newForm;
	
	if (formName == "Shrubberry") {
		newForm = new ShrubberyCreationForm(target);
	}
	else if (formName == "Robot") {
		newForm = new RobotomyRequestForm(target);
	}
	else if (formName == "President") {
		newForm = new PresidentialPardonForm(target);
	}
	else {
		throw Intern::FormDoNotExistsException();
	}
	std::cout << "Intern creates " << newForm->getName() << std::endl;
	return newForm;
}
/* ************************************************************************** */
/*                                                                            */
/*  		Exception FormDoNotExistsException 								  */
/* ************************************************************************** */
Intern::FormDoNotExistsException::FormDoNotExistsException(void){};
Intern::FormDoNotExistsException::FormDoNotExistsException(FormDoNotExistsException const & rhs)  {
	*this = rhs;
}
Intern::FormDoNotExistsException & Intern::FormDoNotExistsException::operator=(FormDoNotExistsException const & rhs) {
	if (this == &rhs) {}
	return (*this) ;
}
Intern::FormDoNotExistsException::~FormDoNotExistsException(void) throw(){};

const char*  Intern::FormDoNotExistsException::what() const throw() {
    return (" Ce formulaire n'existe pas, Faite une demande pour le creer ");
}
