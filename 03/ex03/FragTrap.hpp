/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:55:24 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/05 12:29:23 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_H
#define FRAG_TRAP_H

#include "ClapTrap.hpp"

class FragTrap: public virtual ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string _name);
    FragTrap(const FragTrap &value);
    virtual ~FragTrap();
    FragTrap& operator=(const FragTrap &value);
    void highFivesGuys(void);
};

#endif