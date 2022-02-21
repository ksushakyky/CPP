/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:55:58 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/12 18:02:14 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target): Form("Shrubbery Creation Form", 145, 137)
{
    target = _target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &value): Form(value)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &value)
{
    if (this != &value)
	{
		target = value.target;
	}
	return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const 
{
	Form::execute(executor);
	std::ofstream   file;  
    std::string     name;
    name = target + "_shrubbery";
    try 
    {
		file.open(name);
	}
	catch (std::ostream::failure e)
    {
		std::cout << "File cannot open.";
	}
    file << ASCIITREE;
	file.close();
}

