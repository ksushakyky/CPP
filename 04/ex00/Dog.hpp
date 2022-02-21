/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:12:29 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/04 15:44:44 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"

class Dog: public Animal
{    
public:
    Dog();
    Dog(const Dog &value);
    ~Dog();
    Dog& operator=(const Dog &value);
    void makeSound(void) const;
}; 

#endif