/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:11:43 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/13 12:34:58 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &value)
{
    *this = value;
}

Intern::~Intern()
{
}

Intern& Intern::operator=(const Intern &value)
{
    if (this == &value)
        return *this;
    return *this;
}

Form* Intern::makeForm(std::string name, std::string target)
{
    Form* ptr = nullptr;
    int i = 0;
    std::string array_name[3] = {"shrubbery request", "robotomy request", "presidential request"};
	while (name.compare(array_name[i]) && i < 3)
        i++;
    switch(i)
    {
        case 0:
            std::cout << "Intern creates " << name << std::endl;
            ptr = new ShrubberyCreationForm(target);
            break ;
        case 1:
            std::cout << "Intern creates " << name << std::endl;
            ptr = new RobotomyRequestForm(target);
            break ;
        case 2:
            std::cout << "Intern creates " << name << std::endl;
            ptr = new PresidentialPardonForm(target);
            break ;
        default:
            throw InvalidForm();
    }
    return ptr;
}

const char * Intern::InvalidForm::what( void ) const throw()
{
	return "Error! Unknown Form!";
}