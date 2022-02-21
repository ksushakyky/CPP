/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 17:49:27 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/08 16:06:17 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
#define AMATERIA_H

#include <iostream>
#include "ICharacter.hpp"
class ICharacter;

class AMateria
{
protected:
    std::string _type;
public:
    AMateria();
    AMateria(std::string const &type);
    AMateria(const AMateria &value);
    virtual ~AMateria();
    std::string const& getType() const;
    AMateria& operator=(const AMateria &value);
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif