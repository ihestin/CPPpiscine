/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 20:51:30 by ihestin           #+#    #+#             */
/*   Updated: 2018/04/03 20:51:46 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(void)  {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequest ", 72, 45) {
	setTarget(target);
	srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &rhs) {
		*this = rhs;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
}

RobotomyRequestForm		& RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs) {
		this->_target = rhs.getTarget();
		return (*this);
}


/* ************************************************************************** */
/*                                                                            */
/*  		Forme execute  													  */
/* ************************************************************************** */
void 		RobotomyRequestForm::execute( Bureaucrat const & man) const{
	checkExecute(man);
	
	if (rand() % 2)
		std::cout << this->_target << " a ete robotise !" << std::endl;
	else
		std::cout << "Une erreur inattendue est survenue, Re essayer !" << std::endl;

}


