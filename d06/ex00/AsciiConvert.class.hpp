/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AsciiConvert.class.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 14:35:32 by ihestin           #+#    #+#             */
/*   Updated: 2018/04/04 14:35:37 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef  ASCIICONVERT_CLASS_H
# define ASCIICONVERT_CLASS_H

# include <iostream>
# include <string>


class AsciiConvert {

	private:

		std::string		_strv;
		AsciiConvert(void);

	public:
		AsciiConvert(std::string strv);
		AsciiConvert(AsciiConvert const & rhs);
		~AsciiConvert(void);

		AsciiConvert  		&operator=(AsciiConvert const &rhs);
		std::string			getStrv( void ) const;
		operator char(void) const;
		operator int(void) const;
		operator float(void) const;
		operator double(void) const;

/* ************************************************************************** */
/*                                                                            */
/*  		Exception ConversionException 								  */
/* ************************************************************************** */
		class   		ConversionException: public std::exception
		{
		public:
			ConversionException();
			ConversionException(ConversionException const & rhs);
			~ConversionException() throw();
			ConversionException  		&operator=(ConversionException const &rhs);
			virtual	const  char 		*what() const throw ();
		};

};

#endif
