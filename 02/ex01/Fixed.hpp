/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 13:50:59 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/01 17:47:58 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int value;
    static const int bit;
public:
    Fixed();
    Fixed(const Fixed &fix);
    Fixed(const int _value);
    Fixed(const float _value);
    ~Fixed();
    Fixed& operator=(const Fixed &fix);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream& operator<<(std::ostream &out, const Fixed &fix);

#endif