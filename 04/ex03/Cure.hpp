/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 17:56:58 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/08 13:15:54 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
#define CURE_H

#include "AMateria.hpp"

class Cure: public AMateria
{
public:
    Cure(void);
    Cure(const Cure &value);
    virtual ~Cure();
    std::string getType(void) const;
    Cure& operator=(const Cure &value);
    Cure* clone() const;
    void use(ICharacter& target);
};

#endif
