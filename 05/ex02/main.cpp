/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:47:11 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/12 18:08:04 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{	
    std::cout << "--------ShrubberyCreationForm---------" << std::endl;
	try
	{
		Bureaucrat bob("Bob", 1);
		ShrubberyCreationForm f("home");
		bob.signForm(f);
		bob.executeForm(f);
		Bureaucrat bob2("Bob2", 144);
		ShrubberyCreationForm f2("home2");
		bob2.signForm(f2);
		bob2.executeForm(f2);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
    std::cout << "--------RobotomyRequestForm---------" << std::endl;
    try
	{
		Bureaucrat ben("Ben", 30);
		RobotomyRequestForm f("Robot");
		ben.signForm(f);
		ben.executeForm(f);

		Bureaucrat ben2("Ben2", 46);
		RobotomyRequestForm f2("Robot");
		ben2.signForm(f2);
		ben2.executeForm(f2);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
    std::cout << "------PresidentialPardonForm------" << std::endl;
    try
	{
		Bureaucrat bill("Bill", 4);
		PresidentialPardonForm f("Ford");
		bill.signForm(f);
		bill.executeForm(f);

		Bureaucrat bill2("Bill2", 26);
		PresidentialPardonForm f2("Ford");
		bill2.signForm(f2);
		bill2.executeForm(f2);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

    return 0;
}