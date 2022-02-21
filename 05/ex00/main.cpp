/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:46:30 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/13 12:39:43 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    std::cout << "--------max grade---------" << std::endl;
	try
	{
		Bureaucrat max("Bob", 1);
		std::cout << max << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
    std::cout << "--------min grade---------" << std::endl;
    try
	{
		Bureaucrat min("Ben", 150);
		std::cout << min << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
    std::cout << "------negative grade------" << std::endl;
    try
	{
		Bureaucrat negative("Bill", -1);
		std::cout << negative << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
   
    std::cout << "-----increment grade------" << std::endl;
	try
	{
		Bureaucrat max("Bob", 150);
		max.incrementGrade();
        std::cout << max << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
    try
	{
		Bureaucrat max("Bill", 15);
		max.incrementGrade();
        std::cout << max << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
    std::cout << "-----decrement grade------" << std::endl;
    try
	{
		Bureaucrat min("Ben", 1);
        min.decrementGrade();
		std::cout << min << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
    try
	{
		Bureaucrat min("Ben", 35);
        min.decrementGrade();
		std::cout << min << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
    return 0;
}