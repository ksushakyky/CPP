/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 17:57:01 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/08 13:15:59 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)
{
    std::cout << "Default constructor from the Ice class called" << std::endl;
    _type = "ice";
}

Ice::Ice(const Ice &value)
{
    std::cout << "Copy constructor from the Ice class called" << std::endl;
    *this = value;
}

Ice::~Ice()
{
    std::cout << "Destructor from the Ice class called" << std::endl;
}

std::string Ice::getType(void) const
{
    return _type;
}

Ice& Ice::operator=(const Ice &value)
{
    if (this != &value)
		AMateria::operator=(value);
	return *this;
}

Ice* Ice::clone() const
{
	return new Ice();
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}