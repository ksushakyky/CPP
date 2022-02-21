/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 13:51:17 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/01 17:44:21 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>
# include <stdlib.h>

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
    bool operator==(const Fixed &fix);
    bool operator!=(const Fixed &fix);
    bool operator>(const Fixed &fix);
    bool operator<(const Fixed &fix);
    bool operator>=(const Fixed &fix);
    bool operator<=(const Fixed &fix);
    Fixed operator+(const Fixed &fix);
    Fixed operator-(const Fixed &fix);
    Fixed operator*(const Fixed &fix);
    Fixed operator/(const Fixed &fix);
    Fixed& operator++(void);
    Fixed& operator--(void);
    Fixed operator++(int);
    Fixed operator--(int);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
    static Fixed& min(Fixed &fix1, Fixed &fix2);
    static const Fixed& min(const Fixed &fix1, const Fixed &fix2);
    static Fixed& max(Fixed &fix1, Fixed &fix2);
    static const Fixed& max(const Fixed &fix1, const Fixed &fix2);
};

std::ostream& operator<<(std::ostream &out, const Fixed &fix);

#endif