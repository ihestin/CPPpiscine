/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 20:52:26 by ihestin           #+#    #+#             */
/*   Updated: 2018/04/03 20:53:04 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(void)  {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5) {
	setTarget(target);
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &rhs) {
		*this = rhs;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
}

PresidentialPardonForm		& PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs) {
		this->_target = rhs.getTarget();
		return (*this);
}


/* ************************************************************************** */
/*                                                                            */
/*  		Forme execute  													  */
/* ************************************************************************** */
void 		PresidentialPardonForm::execute( Bureaucrat const & man) const {
	checkExecute(man);
	std::cout << "Tells us " << getTarget() <<" has been pardoned by Zaphod Beeblebrox." <<std::endl;

}


