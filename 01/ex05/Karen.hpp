/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 17:31:05 by maragorn          #+#    #+#             */
/*   Updated: 2021/09/30 17:31:06 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H
#define KAREN_H

#include <iostream>

class Karen
{
private:
    void (debug)(void);
    void info(void);
    void warning(void);
    void error(void);
public:
    Karen(void);
    ~Karen();
    void complain(std::string level);
};

typedef void (Karen::*ptr_func)(void);

#endif