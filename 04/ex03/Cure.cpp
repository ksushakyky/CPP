/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 17:56:54 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/08 13:15:48 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void): AMateria()
{
    std::cout << "Default constructor from the Cure class called" << std::endl;
    _type = "cure";
}

Cure::Cure(const Cure &value)
{
    std::cout << "Copy constructor from the Cure class called" << std::endl;
    *this = value;
}

Cure::~Cure()
{
    std::cout << "Destructor from the Cure class called" << std::endl;
    
}

std::string Cure::getType(void) const
{
    return _type;
}

Cure& Cure::operator=(const Cure &value)
{
    if (this != &value)
		AMateria::operator=(value);
	return *this;
}

Cure* Cure::clone() const
{
	return new Cure;
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}