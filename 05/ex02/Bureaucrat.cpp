/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:46:46 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/12 17:32:08 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const std::string _name, int _grade): name(_name), grade(_grade)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();   
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &value)
{
    *this = value;
}

Bureaucrat::~Bureaucrat()
{
}

std::string Bureaucrat::getName() const
{
    return this->name;
}

int Bureaucrat::getGrade() const
{
    return this->grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &value)
{
    if (this != &value)
    {
        this->grade = value.getGrade();
    }

    return *this;
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat &value)
{
	out << value.getName() << ", bureaucrat grade " << value.getGrade() << ".";
	return out;
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low!";
}

const char* Bureaucrat::GradeTooHighException ::what() const throw()
{
    return "Grade is too high!";
}

void Bureaucrat::incrementGrade()
{
    this->grade--;
    if (this->grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
    this->grade++;
    if (this->grade > 150)
        throw Bureaucrat::GradeTooLowException();

}

void    Bureaucrat::signForm(Form &value)
{
    try 
    {
		value.beSigned(*this);
		std::cout << this->getName() << " signs " << value.getName() << "." << std::endl;
	}
	catch (std::exception &e) 
    {
		std::cout << this->getName() << " cannot sign " << value.getName() << " because " << e.what() << std::endl;
	}
}

void    Bureaucrat::executeForm(Form const & form)
{
    try
	{
		form.execute(*this);
		std::cout << getName() << " executes " << form.getName() << "." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << getName() << " cannot execute " << form.getName() << " because : ";
		std::cerr << e.what() << '\n';
	}
}
