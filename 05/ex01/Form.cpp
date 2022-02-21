/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:46:59 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/11 16:41:40 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string _name, const int sig, const int exe):
    name(_name), is_signed(false), grade_sig(sig), grade_exe(exe)
{
     if (grade_sig < 1 || grade_sig < 1)
        throw Form::GradeTooHighException();   
    if (grade_sig > 150 || grade_exe > 150)
        throw Form::GradeTooLowException();
}

Form::Form(const Form &value): name(value.name), grade_sig(value.grade_sig),
		grade_exe(value.grade_exe)
{
    *this = value;
}

Form::~Form()
{
}

std::string Form::getName() const
{
    return this->name;
}

bool Form::getIsSigned() const
{
    return is_signed;
}

int Form::getGradeSig() const
{
    return this->grade_sig;
}

int Form::getGradeExe() const
{
    return grade_exe;
}

Form& Form::operator=(const Form &value)
{
    if(this != &value)
        is_signed = value.is_signed;
    return *this;
}

std::ostream& operator<<(std::ostream &out, const Form &value)
{
    if (value.getIsSigned() == true)
    {
        out << value.getName() << " is signed ";
        out << value.getGradeSig() << " required grade ";
        out << value.getGradeExe() << " execut.";
    }
    else
    {
        out << value.getName() << " is not signed ";
        out << value.getGradeSig() << " required grade ";
        out << value.getGradeExe() << " is not execut.";
    }
        
    return out;
}

void Form::beSigned(Bureaucrat &b)
{
    if (b.getGrade() > grade_sig)
    {
        this->is_signed = false;
        throw GradeTooLowException();
    }
	else
	    this->is_signed = true;
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Grade is too low!";
}

const char*Form::GradeTooHighException ::what() const throw()
{
    return "Grade is too high!";
}