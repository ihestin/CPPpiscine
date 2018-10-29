/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 15:06:23 by ihestin           #+#    #+#             */
/*   Updated: 2018/04/03 15:07:39 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

# include <iostream>
#include <fstream>     
#include "Form.hpp"

class ShrubberyCreationForm : public Form {

	private:
		std::string		_target;

		ShrubberyCreationForm(void);
		ShrubberyCreationForm(ShrubberyCreationForm const & rhs);
	protected:


	public:
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm(void);

		ShrubberyCreationForm  		&operator=(ShrubberyCreationForm const &rhs);

/* ************************************************************************** */
/*                                                                            */
/*  		Forme execute  													  */
/* ************************************************************************** */
		void 			execute( Bureaucrat const & ) const;

};



#endif
