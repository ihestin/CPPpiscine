/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mploux <mploux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 23:02:47 by mploux            #+#    #+#             */
/*   Updated: 2018/04/01 23:02:47 by mploux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Core.hpp"

int main()
{
	std::ofstream out("logs.txt");
	std::streambuf *coutbuf = std::cout.rdbuf();
	std::cout.rdbuf(out.rdbuf());
	std::cout << "Starting !" << std::endl;


	Core::getInstance().start();


	std::cout << "Stopping" << std::endl;
	std::cout.rdbuf(coutbuf);
	return 0;
}
