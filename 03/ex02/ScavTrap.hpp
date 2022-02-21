/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:54:57 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/05 11:54:58 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_H
#define SCAV_TRAP_H

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(std::string _name);
    ScavTrap(const ScavTrap &value);
    ~ScavTrap();
    void guardGate ();
    ScavTrap& operator=(const ScavTrap &value);
    void attack(std::string const &target);
};

#endif