/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:53:50 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/05 11:53:51 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap jack("Jack");
    ClapTrap joe("Joe");

    jack.attack("Joe");
    joe.takeDamage(0);
    joe.beRepaired(0); 
}