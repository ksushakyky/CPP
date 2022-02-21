/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:55:47 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/12 18:03:04 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string _target): Form("PresidentialPardonForm", 25, 5)
{
    target = _target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &value): Form(value)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &value)
{
    if (this != &value)
	{
		target = value.target;
	}
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const 
{
	Form::execute(executor);
	std::cout << target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
