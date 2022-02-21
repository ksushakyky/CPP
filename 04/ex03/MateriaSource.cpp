/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 13:30:50 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/08 16:03:12 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << "Default constructor from the MateriaSource class called" << std::endl;
    for (int i = 0; i < 4; i++)
		materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &value)
{
    std::cout << "Copy constructor from the MateriaSource class called" << std::endl;
    *this = value;
    for (int i = 0; i < 4; i++)
		materias[i] = value.materias[i];
}

MateriaSource::~MateriaSource()
{
    std::cout << "Destructor from the MateriaSource class called" << std::endl;
    for (int i = 0; i < 4; i++)
		if (materias[i] != NULL)
			delete materias[i];
}

MateriaSource& MateriaSource::operator=(const MateriaSource &value)
{
    if (this != &value)
    {
        for (int i = 0; i < 4; i++)
		{
			if (materias[i] != NULL)
				delete materias[i];
			materias[i] = value.materias[i]->clone();
		}
    }  
    return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materias[i] == NULL)
        {
            this->materias[i] = m;
            break;
        }
    }
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
    assert(!type.compare("ice") || !type.compare("cure"));
    for (int i = 0; i < 4; i++)
    {
        if (materias[i] && materias[i]->getType() == type)
        {
            return materias[i]->clone();
        }
			
    }
		
	return 0;
}