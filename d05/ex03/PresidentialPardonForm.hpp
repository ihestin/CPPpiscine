/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 20:53:09 by ihestin           #+#    #+#             */
/*   Updated: 2018/04/03 20:53:23 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

# include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form {

	private:
		std::string		_target;

		PresidentialPardonForm(void);
		PresidentialPardonForm(PresidentialPardonForm const & rhs);
	protected:


	public:
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm(void);

		PresidentialPardonForm  		&operator=(PresidentialPardonForm const &rhs);

/* ************************************************************************** */
/*                                                                            */
/*  		Forme execute  													  */
/* ************************************************************************** */
		void 			execute( Bureaucrat const & ) const;

};



#endif
