/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 17:57:04 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/08 13:16:02 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
#define ICE_H

#include "AMateria.hpp"

class Ice: public AMateria
{
public:
    Ice(void);
    Ice (const Ice &value);
    virtual ~Ice();
    std::string getType(void) const;
    Ice& operator=(const Ice &value);
    Ice* clone() const;
    void use(ICharacter& target);
};

#endif
