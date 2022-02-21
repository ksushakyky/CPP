/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:12:33 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/08 15:33:22 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    Animal* arrayAnimal[4];
    
    for (int x = 0; x < 4; x++)
    {
        if (x % 2 == 0)
            arrayAnimal[x] = new Dog();
        else
            arrayAnimal[x] = new Cat();
    }
    for (int y = 0; y < 4; y++)
    {
        delete arrayAnimal[y];
    }
    
    Dog basic;
    {
        Dog tmp = basic;
    }
    delete j;//should not create a leak
    delete i;
    return 0;
}