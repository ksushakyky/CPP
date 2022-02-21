/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:55:52 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/12 18:03:19 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string _target): Form("RobotomyRequestForm", 72, 45)
{
    target = _target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &value): Form(value)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &value)
{
    if (this != &value)
	{
		target = value.target;
	}
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const 
{
	Form::execute(executor);
	std::srand(time(NULL));
    std::cout << "**** Bzzzzzz ****" << std::endl;
    if (std::rand() % 2 == 0)
		std::cout << this->target << " has been robotomized successfully 50% of the time." << std::endl;
	else
		std::cout << target << " it’s a failure." << std::endl;
}
