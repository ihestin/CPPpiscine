/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 17:06:04 by ihestin           #+#    #+#             */
/*   Updated: 2018/04/02 17:06:45 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>

class Form;
class Bureaucrat {

	private:
		const std::string			_name;
		int 						_grade;

	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & rhs);
		~Bureaucrat(void);

		Bureaucrat  		&operator=(Bureaucrat const &rhs);

		int 			getGrade( void ) const;
		std::string		getName( void ) const;
		void			setGrade( int grade );
		void			incrementGrade( void );
		void 			decrementGrade(void);

/* ************************************************************************** */
/*                                                                            */
/*  		fonction executeForm			 								  */
/* ************************************************************************** */
		void			executeForm (Form const & form);

/* ************************************************************************** */
/*                                                                            */
/*  		fonction signform				 								  */
/* ************************************************************************** */
		void			signForm (Form  *form);

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


std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs);


#endif
