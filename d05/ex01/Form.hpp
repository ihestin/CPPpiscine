/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 12:25:41 by ihestin           #+#    #+#             */
/*   Updated: 2018/04/03 12:26:26 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

# include <iostream>
# include "Bureaucrat.hpp"

class Form {

	private:

		std::string const	_name;
		bool				_signed;
		int	const			_gradeToSign;
		int	const			_gradeToExec;

	public:
		Form(void);
		Form(std::string name, int gradeToSign, int gradeToExec);
		Form(Form const & rhs);
		~Form(void);
		Form  		&operator=(Form const &rhs);

		/* Getters	*/
		bool 			getSigned( void ) const;
		int 			getGradeToSign( void ) const;
		int 			getGradeToExec( void ) const;
		std::string		getName( void ) const;
		/* fonction */
		void 			beSigned(Bureaucrat & man);

/* ************************************************************************** */
/*                                                                            */
/*  		Exception GradeTooHighException 								  */
/* ************************************************************************** */
		class   		GradeTooHighException: public std::exception
		{
		public:
			GradeTooHighException();
			GradeTooHighException(GradeTooHighException const & rhs);
			~GradeTooHighException() throw();
			GradeTooHighException  		&operator=(GradeTooHighException const &rhs);
			virtual	const  char 		*what() const throw ();
		};
		

/* ************************************************************************** */
/*                                                                            */
/*  		Exception GradeTooLowException 									  */
/* ************************************************************************** */
		class   		GradeTooLowException: public std::exception
		{
		public:
			GradeTooLowException();
			GradeTooLowException(GradeTooLowException const & rhs);
			~GradeTooLowException() throw();
			GradeTooLowException  		&operator=(GradeTooLowException const &rhs);
			virtual	const  char 		*what() const throw ();
		};
};

std::ostream & operator<<( std::ostream & o, Form const & rhs);

#endif
