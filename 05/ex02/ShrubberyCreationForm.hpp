/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:56:00 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/12 18:03:30 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
private:
    std::string target;
public:
    ShrubberyCreationForm(std::string _target);
    ShrubberyCreationForm(const ShrubberyCreationForm &value);
    virtual~ShrubberyCreationForm();
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm &value);
    void execute(Bureaucrat const & executor) const;
};

#define ASCIITREE " |-- ex02\n \
|   |-- Bureaucrat.cpp\n \
|   |-- Bureaucrat.hpp\n \
|   |-- Form.cpp\n \
|   |-- Form.hpp\n \
|   |-- Makefile\n \
|   |-- PresidentialPardonForm.cpp\n \
|   |-- PresidentialPardonForm.hpp\n \
|   |-- RobotomyRequestForm.cpp\n \
|   |-- RobotomyRequestForm.hpp\n \
|   |-- ShrubberyCreationForm.cpp\n \
|   |-- ShrubberyCreationForm.hpp\n \
|   |-- main.cpp\n "

#endif