/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:40:47 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/18 13:40:48 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}

int main()
{
    Data*		data = nullptr;
	uintptr_t	serial;
    Data color = {"green"};

    std::cout << &color.p << ":" << color.p << std::endl;
    serial = serialize(&color);
    std::cout << serial << std::endl;
    data = deserialize(serial);
    std::cout << &data->p << ":" << data->p << std::endl;


}