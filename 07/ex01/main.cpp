/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:12:12 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/19 15:12:13 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template< typename T >
void print( T const & value ) 
{
    std::cout << value << std::endl;
}

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    ::iter(array, 5, print);

    std::string array2[5] = {"one", "two", "three", "four", "five"};
    ::iter(array2, 5, print);

    float array3[2] = {21.0, 42.0};
    ::iter(array3, 2, print);

    char array4[2] = {'Q', 'W'};
    ::iter(array4, 2, print);

    return 0;
}