/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 18:09:14 by ihestin           #+#    #+#             */
/*   Updated: 2018/03/28 18:16:09 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void){
	std::string		str = "HI THIS IS BRAIN";
	std::string		*strp = &str;
	std::string		&strr = str;

	std::cout << "string " << str << std::endl;
	std::cout << "Pointeur " << *strp << std::endl;
	std::cout << "Reference  " << strr << std::endl;

	return (0);
}
