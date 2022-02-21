/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 15:58:23 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/19 15:33:05 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
private:
    T   *array;
    int size;
public:
    Array(): size(0), array(new T[0]()) {}
    Array(unsigned int n): array(new T[n]()), size(n){
        if (!array) 
            throw AllocArrayErrorException();
        for (int i = 0; i < size; i++)
            array[i] = 0;
    }
    Array(const Array &value){
        *this = value;
    }
    ~Array(){
        if (this->array)
            delete [] array;
    }
    Array& operator=(const Array &value){
        if (this != &value)
        {
            this->size = value.size;
            this->array = new T[this->size]();
            if (!array) 
                throw AllocArrayErrorException();
            for (int i = 0; i < size; i++)
		        this->array[i] = value.array[i];
        }
        return *this;
    }
    T& operator[] (const int index){
        if (index >= size || index < 0)
				throw OutArrayErrorException();
        return array[index];
    }
    unsigned int size_array(void) const{
        return size;
    }
    class OutArrayErrorException: public std::exception{
        const char* what() const throw(){
            return "Element out of bounds of array.";
        }
    };
    class AllocArrayErrorException: public std::exception{
        const char* what() const throw(){
            return "Memory not allocated.";
        }
    };
};

#endif