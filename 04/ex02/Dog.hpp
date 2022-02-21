/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:12:29 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/05 17:53:47 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
private:
	Brain* brain;
public:
    Dog();
    Dog(const Dog &value);
    ~Dog();
    Dog& operator=(const Dog &value);
    void makeSound(void) const;
    Brain* getBrain(void) const;
}; 

#endif