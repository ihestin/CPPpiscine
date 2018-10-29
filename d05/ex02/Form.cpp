/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 12:25:05 by ihestin           #+#    #+#             */
/*   Updated: 2018/04/03 12:25:31 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form(void) : _name("Unknow"), _signed(0), _gradeToSign(50), _gradeToExec(120),_target("0") {
		
}

Form::Form(std::string name,int gradeToSign,int gradeToExec) : _name(name), _signed(0),
			 _gradeToSign(gradeToSign), _gradeToExec(gradeToExec),_target("0")  {
		if (gradeToSign < 1 || gradeToExec < 1)
		throw (Form::GradeTooHighException());
	if (gradeToSign > 150 || gradeToExec > 150)
		throw (Form::GradeTooLowException());

}

Form::Form(Form const &rhs) : _name(rhs.getName()), _signed(rhs.getSigned()), _gradeToSign(rhs.getGradeToSign()),
										 _gradeToExec(rhs.getGradeToExec()){
		*this = rhs;
}

Form::~Form(void) {
}

Form		& Form::operator=(Form const &rhs) {
		this->_signed = rhs.getSigned();
		return (*this);
}

bool 		Form::getSigned( void ) const {
		return _signed;
}
int 		Form::getGradeToSign( void ) const {
		return _gradeToSign;
}
int 		Form::getGradeToExec( void ) const {
		return _gradeToExec;
}
void		Form::setTarget( std::string target ) {
		_target = target;
}

std::string	Form::getName( void ) const {
		return _name;
}
std::string	Form::getTarget( void ) const {
		return _target;
}


std::ostream & operator<<( std::ostream & o, Form const & rhs) {
		o << "Formulaire " << rhs.getName() ;
		if (rhs.getSigned())
			o << " est signé et est pret a être executé " <<  std::endl;
		else
			o << " n'est pas signé " <<  std::endl;
		o << " le grade limite pour signature est "<< rhs.getGradeToSign() << " et pour execution " << rhs.getGradeToExec() << std::endl;
		if (rhs.getTarget() != "0")
			o << "Execution prevu pour la target " << rhs.getTarget() << std::endl;
		return o;
}

/* ************************************************************************** */
/*                                                                            */
/*  		fonction besigned				 								  */
/* ************************************************************************** */
void		Form::beSigned(Bureaucrat & man){
	if (man.getGrade() > _gradeToSign)
		throw Form::GradeTooLowException();
	_signed = 1;
}

/* ************************************************************************** */
/*                                                                            */
/*  		fonction checkExecute			 								  */
/* ************************************************************************** */
void		Form::checkExecute(Bureaucrat const  & man) const {
	if (man.getGrade() > _gradeToExec)
		throw Form::GradeTooLowException();
	if (!_signed)
		throw Form::NotSignedException();
}

/* ************************************************************************** */
/*                                                                            */
/*  		Exception GradeTooHighException 								  */
/* ************************************************************************** */
Form::GradeTooHighException::GradeTooHighException(void){};
Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const & rhs)  {
	*this = rhs;
}
Form::GradeTooHighException & Form::GradeTooHighException::operator=(GradeTooHighException const & rhs) {
	if (this == &rhs) {}
	return (*this) ;
}
Form::GradeTooHighException::~GradeTooHighException(void) throw(){};

const char*  Form::GradeTooHighException::what() const throw() {
    return ("Form Ce grade est trop élevé pour des bureacrates ");
}


/* ************************************************************************** */
/*                                                                            */
/*  		Exception GradeTooLowException 									  */
/* ************************************************************************** */
Form::GradeTooLowException::GradeTooLowException(void){};
Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const & rhs)  {
	*this = rhs;
}
Form::GradeTooLowException & Form::GradeTooLowException::operator=(GradeTooLowException const & rhs) {
	if (this == &rhs) {}
	return (*this) ;
}
Form::GradeTooLowException::~GradeTooLowException(void) throw(){};

const char*  Form::GradeTooLowException::what() const throw() {
    return ("Form Ce grade est trop bas même pour des bureacrates ");
}
/* ************************************************************************** */
/*                                                                            */
/*  		Exception NotSignedException		 									  */
/* ************************************************************************** */
Form:: NotSignedException:: NotSignedException(void){};
Form:: NotSignedException:: NotSignedException( NotSignedException const & rhs)  {
	*this = rhs;
}
Form:: NotSignedException & Form:: NotSignedException::operator=( NotSignedException const & rhs) {
	if (this == &rhs) {}
	return (*this) ;
}
Form:: NotSignedException::~NotSignedException(void) throw(){};

const char*  Form:: NotSignedException::what() const throw() {
    return (" Signer le formulaire avant toutes choses ");
}

