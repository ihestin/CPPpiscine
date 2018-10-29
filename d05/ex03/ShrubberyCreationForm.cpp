/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 15:07:45 by ihestin           #+#    #+#             */
/*   Updated: 2018/04/03 15:08:16 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(void)  {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shruberry", 145, 137) {
	setTarget(target);
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &rhs) {
		*this = rhs;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
}

ShrubberyCreationForm		& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs) {
		this->_target = rhs.getTarget();
		return (*this);
}


/* ************************************************************************** */
/*                                                                            */
/*  		Forme execute  													  */
/* ************************************************************************** */
void 		ShrubberyCreationForm::execute( Bureaucrat const & man) const{
	std::string name = getTarget().append("_shrubbery");
	const char *fileName = name.c_str();

	checkExecute(man);
	
	std::ofstream ofs(fileName);
		if (ofs)
		{
		ofs << "        \\/ |    |/" << std::endl;
		ofs << "        \\/ / \\||/  /_/___/_" << std::endl;
		ofs << "         \\/   |/ \\/" << std::endl;
		ofs << "    _\\__\\_\\   |  /_____/_" << std::endl;
		ofs << "           \\  | /          /" << std::endl;
		ofs << "  __ _-----`  |{,-----------~" << std::endl;
		ofs << "            \\ }{" << std::endl;
		ofs << "             }{{" << std::endl;
		ofs << "             }}{" << std::endl;
		ofs << "             {{}" << std::endl;
		ofs << "       , -=-~{ .-^- _" << std::endl;
		ofs << "  ejm        `}" << std::endl;
		ofs << "              {  "    << std::endl;		}
	
	ofs.close();

}


