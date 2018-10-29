/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 22:03:10 by ihestin           #+#    #+#             */
/*   Updated: 2018/04/03 22:04:58 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

# include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern {

	private:

	protected:


	public:
		Intern(void);
		~Intern(void);

		Form * makeForm(std::string formName, std::string target);

/* ************************************************************************** */
/*                                                                            */
/*  		Exception FormDoNotExistsException 								  */
/* ************************************************************************** */
		class   		FormDoNotExistsException: public std::exception
		{
		public:
			FormDoNotExistsException();
			FormDoNotExistsException(FormDoNotExistsException const & rhs);
			~FormDoNotExistsException() throw();
			FormDoNotExistsException  		&operator=(FormDoNotExistsException const &rhs);
			virtual	const  char 		*what() const throw ();
		};
};




#endif
