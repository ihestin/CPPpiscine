/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 20:51:52 by ihestin           #+#    #+#             */
/*   Updated: 2018/04/03 20:52:20 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

# include <iostream>
#include <time.h>
#include "Form.hpp"

class RobotomyRequestForm : public Form {

	private:
		std::string		_target;

		RobotomyRequestForm(void);
		RobotomyRequestForm(RobotomyRequestForm const & rhs);
	protected:


	public:
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm(void);

		RobotomyRequestForm  		&operator=(RobotomyRequestForm const &rhs);

/* ************************************************************************** */
/*                                                                            */
/*  		Forme execute  													  */
/* ************************************************************************** */
		void 			execute( Bureaucrat const & ) const;

};



#endif
