/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:55:55 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/12 18:03:25 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm: public Form
{
private:
    std::string target;
public:
    RobotomyRequestForm(std::string _target);
    RobotomyRequestForm(const RobotomyRequestForm &value);
    ~RobotomyRequestForm();
    RobotomyRequestForm& operator=(const RobotomyRequestForm &value);
    void execute(Bureaucrat const & executor) const;
};

#endif