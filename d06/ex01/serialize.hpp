/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 16:37:03 by ihestin           #+#    #+#             */
/*   Updated: 2018/04/04 16:37:06 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  SERIALIZE_H
# define SERIALIZE_H


struct Data
{
	std::string	s1;
	int  		n;
	std::string	s2;
};

char dataSer [20];

char alpha_rd[] = "abcdefghijklmnopqrstuvwxyz0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

#endif