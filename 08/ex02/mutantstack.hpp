/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 12:33:00 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/22 16:09:09 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <iterator>

template<typename T>
class MutantStack: public std::stack<T>
{
public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    MutantStack(){}
    MutantStack(const MutantStack &value): std::stack<T>(value){}
    ~MutantStack(){}
    MutantStack& operator=(const MutantStack &value)
    {
        if(this != &value)
            std::stack<T>::operator=(value);
        return *this;
    }
    iterator begin()
    {
        return std::stack<T>::c.begin();
    }
    iterator end()
    {
        return std::stack<T>::c.end();
    }
};

#endif