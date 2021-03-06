/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 17:06:50 by ihestin           #+#    #+#             */
/*   Updated: 2018/04/02 17:07:26 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
# include "Form.hpp"



Bureaucrat::Bureaucrat(void) : _name("Default"), _grade(150) {
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &rhs) : _name(rhs.getName()){
	*this = rhs;
}

Bureaucrat::~Bureaucrat(void) {
}

Bureaucrat		& Bureaucrat::operator=(Bureaucrat const &rhs) {
	this->_grade = rhs.getGrade();
	return (*this);
}

int 		Bureaucrat::getGrade( void ) const {
	return _grade;
}
std::string	Bureaucrat::getName( void ) const {
	return _name;
}


void			Bureaucrat::setGrade( int grade ){
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	_grade = grade;

}
void			Bureaucrat::incrementGrade( void ){
	if (_grade == 1)
		throw (Bureaucrat::GradeTooHighException());
	_grade--;
}
void 			Bureaucrat::decrementGrade(void){
	if (_grade == 150)
		throw (Bureaucrat::GradeTooLowException());
	_grade++;
}


std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs) {
	o << rhs.getName() << " a ateint le niveau " << rhs.getGrade () << " en bureaucratie" <<  std::endl;
			return o;
}
/* ************************************************************************** */
/*                                                                            */
/*  		fonction executeForm				 								  */
/* ************************************************************************** */
void			Bureaucrat::executeForm (Form const & form){
	try
	{
	 	form.execute(*this);
	 	std::cout << " Le formulaire " << form.getName()<< "a ete executé par "<<_name << std::endl;
	}
	catch (Form::NotSignedException & e)
	{
		std::cout << "Il faut signer le formulaire avant execution " << std::endl;
	}
	catch (Form::GradeTooLowException & e)
	{
		std::cout << _name << " n'est pas habilité à signer le formulaire " << form.getName() << std::endl;
		std::cout << "Il faut au moins une habilitation de niveau " << form.getGradeToSign() << std::endl;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*  		fonction signform				 								  */
/* ************************************************************************** */
void			Bureaucrat::signForm (Form *form){
	try
	{
	 	form->beSigned(*this);
	 	std::cout << " Le formulaire " << form->getName()<< " a ete signe par "<<_name << std::endl;
	}
	catch (Form::GradeTooLowException & e)
	{
		std::cout << _name << " n'est pas habilité à signer le formulaire " << form->getName() << std::endl;
		std::cout << "Il faut au moins une habilitation de niveau " << form->getGradeToSign() << std::endl;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*  		Exception GradeTooHighException 								  */
/* ************************************************************************** */
Bureaucrat::GradeTooHighException::GradeTooHighException(void){};
Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const & rhs)  {
	*this = rhs;
}
Bureaucrat::GradeTooHighException & Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const & rhs) {
	if (this == &rhs) {}
	return (*this) ;
}
Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw(){};

const char*  Bureaucrat::GradeTooHighException::what() const throw() {
    return (" Ce grade est trop élevé pour des bureaucrates ");
}


/* ************************************************************************** */
/*                                                                            */
/*  		Exception GradeTooLowException 									  */
/* ************************************************************************** */
Bureaucrat::GradeTooLowException::GradeTooLowException(void){};
Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const & rhs)  {
	*this = rhs;
}
Bureaucrat::GradeTooLowException & Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const & rhs) {
	if (this == &rhs) {}
	return (*this) ;
}
Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw(){};

const char*  Bureaucrat::GradeTooLowException::what() const throw() {
    return (" Ce grade est trop bas même pour des bureaucrates ");
}


