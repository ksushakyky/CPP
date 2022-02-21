/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 13:28:08 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/08 16:03:21 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
private:
    AMateria *materias[4];
public:
    MateriaSource();
    MateriaSource(const MateriaSource &value);
    virtual ~MateriaSource();
    MateriaSource& operator=(const MateriaSource &value);
    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
};

#endif