/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 12:37:20 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/29 12:37:30 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_H
# define FIXED_H

# include <iostream>
#include <cmath>

class Fixed {

	private:
		static const int 	_bits;
		int					_RawBits;

	public:
		Fixed(void);
		Fixed(Fixed  const & fix);
		Fixed(int  ii);
		Fixed(float ff);
		~Fixed(void);

		Fixed & operator=( Fixed const & rhs );
		int 	getRawBits( void ) const;
		int 	getBits( void ) const;
		void 	setRawBits( int const raw );
		float	toFloat(void) const;
		int		toInt(void) const;
		
		bool	operator>(Fixed const & rhs) const;
		bool	operator<(Fixed const & rhs) const;
		bool	operator>=(Fixed const & rhs) const;
		bool	operator<=(Fixed const & rhs) const;
		bool	operator==(Fixed const & rhs) const;
		bool	operator!=(Fixed const & rhs) const;

		Fixed 	operator+(Fixed const & rhs) const;
		Fixed 	operator-(Fixed const & rhs) const;
		Fixed 	operator*(Fixed const & rhs) const;
		Fixed 	operator/(Fixed const & rhs) const;
		
		Fixed &	operator++(void) ;
		Fixed 	operator++( int );
		Fixed &	operator--(void) ;
		Fixed 	operator--( int );


};

std::ostream & operator<<( std::ostream & o, Fixed const & rhs);

Fixed 	& 	min (Fixed & f1 ,Fixed & f2) ;
Fixed 		min (Fixed const f1 ,Fixed const f2) ;
Fixed 	& 	max (Fixed & f1 ,Fixed & f2) ;
Fixed 		max (Fixed const f1 ,Fixed const f2) ;


#endif

