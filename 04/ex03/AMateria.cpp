/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 17:49:24 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/07 18:24:07 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "Default constructor from the AMateria class called" << std::endl;
}

AMateria::AMateria(std::string const &type): _type(type)
{
    std::cout << "Default constructor with args from the AMateria class called" << std::endl;
}

AMateria::AMateria(const AMateria &value)
{
    std::cout << "Copy constructor from the AMateria class called" << std::endl;
    *this = value;
}

AMateria::~AMateria()
{
    std::cout << "Destructor from the AMateria class called" << std::endl;
}

std::string const &AMateria::getType() const
{
    return this->_type;
}

AMateria& AMateria::operator=(const AMateria &value)
{
    if (this != &value)
        this->_type = value.getType(); 
	return *this; 
}
    
void AMateria::use(ICharacter& target)
{
    std::cout << "* thinks " << target.getName() << " *" <<std::endl;
}