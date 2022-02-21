/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:46:30 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/18 13:35:37 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int argc, char **argv)
{	
	if (argc == 2)
	{
		try 
		{
			Convert c(argv[1]);
			c.pars();
			c.toChar();
			c.toInt();
			c.toFloat();
			c.print_velue();
		}
		catch (std::string &e) 
		{
			std::cout << "Error: " << e << std::endl;
		}
	}
	else
		std::cout << "Empty argument" << std::endl;
    return 0;
}