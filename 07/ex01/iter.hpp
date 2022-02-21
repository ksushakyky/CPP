/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:12:17 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/19 15:12:18 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *address, size_t lenght, void (*func)(T const &)) 
{
    if (address == nullptr)
        return ;
    for (size_t i = 0; i < lenght; i++) 
        func(address[i]);
}

#endif