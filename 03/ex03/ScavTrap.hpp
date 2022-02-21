/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:55:41 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/05 12:29:37 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_H
#define SCAV_TRAP_H

#include "ClapTrap.hpp"

class ScavTrap: public virtual ClapTrap
{    
public:
    ScavTrap();
    ScavTrap(std::string _name);
    ScavTrap(const ScavTrap &value);
    virtual ~ScavTrap();
    void guardGate ();
    ScavTrap& operator=(const ScavTrap &value);
    void attack(std::string const &target);
};

#endif