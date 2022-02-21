/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:15:23 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/18 16:15:24 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &a, T &b) 
{
	T tmp = a;

	a = b;
	b = tmp;
}

template <typename T>
T min(const T &a, const T &b) 
{
    if (a < b)
        return a;
	return b;
}

template <typename T>
T max(const T &a, const T &b) 
{
	if (a > b)
        return a;
	return b;
}

#endif