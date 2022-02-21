/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:46:26 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/14 12:06:12 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
private:
    const std::string name;
    int grade;
public:
    Bureaucrat();
    Bureaucrat(const std::string _name, int _grade);
    Bureaucrat(const Bureaucrat &value);
    ~Bureaucrat();
    std::string     getName() const;
    int             getGrade() const;
    Bureaucrat&     operator=(const Bureaucrat &value);
    void			incrementGrade(void);
	void			decrementGrade(void);
    class GradeTooHighException: public std::exception{
        const char* what() const throw();
    };
    class GradeTooLowException: public std::exception{
        const char* what() const throw();
    };
};

std::ostream& operator<<(std::ostream &out, const Bureaucrat &value);

#endif