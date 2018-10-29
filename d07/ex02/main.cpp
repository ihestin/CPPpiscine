/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 13:00:41 by ihestin           #+#    #+#             */
/*   Updated: 2018/04/05 13:02:02 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Array.class.tpp"

int	main(void)
{
	Array<int>			test1 = Array <int> (3);
	Array<std::string> 	test2 = Array <std::string> (2);

	test1[0] = 1;
	test1[1] = 2;
	test1[2] = 3;

	std::cout << " test1 type = int " << test1 << std::endl;

	
	test2[0]= "chain 0";
	test2[1]= "chain 1";

	std::cout << "test2: type = std::string" << std::endl << test2;

	try
	{
		std::cout << "Out of range test " << std::endl;
		test2[5] = "out of range";

	}
		catch (std::exception & e)
	{
		std::cout << e.what()<<  std::endl;
	}

	Array<Array<int> > 		test3 = Array <Array<int> >(4);
	Array<int>				line3 = Array<int> (3);
	int	i,j;

		try
	{
		for (i = 0; i < 4; i++)
		{
			test3[i] = line3;
			for (j= 0 ; j < 3; j++)
				test3[i][j] = i*(3) + j;
		}
	}
		catch (std::exception & e)
	{
		std::cout << "i " << i <<" et j " <<j << e.what()<<  std::endl;
	}
    
		for (i = 0; i < 4; i++)
    		std::cout <<  "line "<< i <<" value " << test3[i] <<  std::endl;
}