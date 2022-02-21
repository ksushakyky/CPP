/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 13:49:10 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/01 17:44:34 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{
private:
    int value;
    static const int fr_bit;
public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &fix);
    Fixed& operator=(const Fixed &fix);
    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif