/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:54:07 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/05 11:54:08 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap jack("Jack");
    ScavTrap bill("Bill");

    std::cout << std::endl;
    jack.attack("Joe");
    std::cout << std::endl;
    bill.takeDamage(0);
    std::cout << std::endl;
    bill.beRepaired(0);
    std::cout << std::endl;
    bill.guardGate(); 
    std::cout << std::endl;
    bill.attack("Jack");
    jack.takeDamage(5);
}