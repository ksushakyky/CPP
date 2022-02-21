/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:12:19 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/05 17:55:41 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
private:
	Brain* brain;
public:
    Cat();
    Cat(const Cat &value);
    ~Cat();
    Cat& operator=(const Cat &value);
    void makeSound(void) const;
    Brain* getBrain(void) const;
};


#endif