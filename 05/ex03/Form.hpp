/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:47:07 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/12 18:03:55 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    const std::string name;
    bool is_signed;
    const int grade_sig;
    const int grade_exe;
public:
    Form(const std::string _name, const int sig, const int exe);
    Form(const Form &value);
    virtual~Form();
    std::string getName() const;
    bool getIsSigned() const;
    int getGradeSig() const;
    int getGradeExe() const;
    Form& operator=(const Form &value);
    void beSigned(Bureaucrat &b);
    virtual void execute(Bureaucrat const & executor) const;
    class GradeTooHighException: public std::exception{
        const char* what() const throw();
    };
    class GradeTooLowException: public std::exception{
        const char* what() const throw();
    };
    class FormIsNotSignedException : public std::exception{
        virtual const char* what() const throw();
    };
};

std::ostream& operator<<(std::ostream &out, const Form &value);

#endif