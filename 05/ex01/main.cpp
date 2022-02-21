/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:47:11 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/14 12:13:19 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    std::cout << "--------max grade---------" << std::endl;
	try
	{
		Bureaucrat max("Bob", 1);
		Form		f("Forma 1", 1, 5);
		max.signForm(f);
		std::cout << f << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
    std::cout << "--------min grade---------" << std::endl;
    try
	{
		Bureaucrat min("Ben", 150);
		Form		b("Forma 2", 30, 5);
		min.signForm(b);
		std::cout << b << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
    return 0;
}