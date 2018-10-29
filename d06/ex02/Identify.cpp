/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 18:14:48 by ihestin           #+#    #+#             */
/*   Updated: 2018/04/04 18:15:02 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <time.h>

class Base { public: virtual ~Base() {} };
class A: public Base {};
class B: public Base {};
class C: public Base {};


Base 	*generate(void)
{
	int i = rand() % 3;

	switch(i)
	{
		case 0 :
			std::cout << "Generated A" << std::endl;
			return (static_cast<Base *>(new A()));
		break;
		case 1 :
			std::cout << "Generated B" << std::endl;
			return (static_cast<Base *>(new B()));
		break;
		case 2 :
			std::cout << "Generated C" << std::endl;
			return (static_cast<Base *>(new C()));
		break;
		default :
		std::cout << "Oh Oh Oh mais que se passe t-il ? La fonction modulo ne fonctionnerais pas" << std::endl;
		return(0);
	}
}

void 	identify_from_pointer( Base * p )
{
	if (dynamic_cast<A*>(p))
		std::cout << "From pointer display: class A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "From pointer display: class B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "From pointer display: class C" << std::endl;
	else
		std::cout << "Pointeur Revoir le code: Vous avez rajouter une classe " << std::endl;
}

void 	identify_from_reference( Base & p )
{
	try 
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "From reference display: class A" << std::endl;
	}
	catch (std::bad_cast &e) 
	{
		try 
		{
			(void)dynamic_cast<B &>(p);
			std::cout << "From reference display: class B" << std::endl;
		}
		catch (std::bad_cast &e)
		{
			try 
			{
				(void)dynamic_cast<C &>(p);
				std::cout << "From reference display: class c" << std::endl;
			}
			catch (std::bad_cast &e) 
			{
				std::cout << "Reference Revoir le code: Vous avez rajouter une classe " << std::endl;
			}
		}
	}
}


int		main( void )
{
	srand(time(0));

	Base	*base = generate();

	if (base == 0)
	{
		std::cout <<  " Pointeur Null, verifier le programme " << std::endl;
		return(0);
	}
	identify_from_pointer(base);
	identify_from_reference(*base);
	delete  base;
	return(0);
}
