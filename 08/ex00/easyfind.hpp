/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:10:14 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/21 16:57:09 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
#include <deque>

template <typename T>
void easyfind(T &container, int n)
{
    try
    {
        typename T::iterator iter;
        
        iter = find(container.begin(), container.end(), n);
        if(iter == container.end())
           throw std::string ("Not found!");
        std::cout << "Found the first occurrence: " << n << std::endl;
    }
    catch(const std::string& e)
    {
        std::cerr << e << std::endl;
    }
}

#endif