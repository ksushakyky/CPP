/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:11:40 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/13 12:33:11 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp" 

class Intern
{
public:
    Intern();
    Intern(const Intern &value);
    ~Intern();
	Intern &operator=(const Intern &value);
    Form* makeForm(std::string name, std::string target);
    class InvalidForm:public std::exception { 
        const char* what() const throw(); 
    };
};

#endif