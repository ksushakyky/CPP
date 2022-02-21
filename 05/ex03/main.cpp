/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:47:11 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/13 17:13:10 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{	
	Intern someRandomIntern;
	Form* f;
	Form* f2;
	Form* f3;
	Form* f4;
	
    std::cout << "--------ShrubberyCreationForm---------" << std::endl;
	try
	{
		Bureaucrat bob("Bob", 1);
		f = someRandomIntern.makeForm("shrubbery request", "Garden");
		bob.signForm(*f);
		bob.executeForm(*f);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
    std::cout << "--------RobotomyRequestForm---------" << std::endl;
    try
	{
		Bureaucrat ben("Ben", 3);
		f2 = someRandomIntern.makeForm("robotomy request", "Bender");
		ben.signForm(*f2);
		ben.executeForm(*f2);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
    std::cout << "------PresidentialPardonForm------" << std::endl;
    try
	{
		Bureaucrat bill("Bill", 4);
		f3 = someRandomIntern.makeForm("presidential request", "Ben");
		bill.signForm(*f3);
		bill.executeForm(*f3);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "------error------" << std::endl;
    try
	{
		Bureaucrat bart("Bart", 1);
		f4 = someRandomIntern.makeForm("jklkfhjghjhk", "Error");
		bart.signForm(*f4);
		bart.executeForm(*f4);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	delete f;
	delete f2;
	delete f3;

    return 0;
}