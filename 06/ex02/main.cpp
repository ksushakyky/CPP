/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksushakyky <ksushakyky@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:41:24 by maragorn          #+#    #+#             */
/*   Updated: 2022/02/21 19:19:15 by ksushakyky       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void)
{
    Base* type = nullptr;
	srand(time(nullptr));
	switch(rand() % 3)
	{
		case 0:
			type = new A;
			break ;
		case 1:
			type = new B;
			break ;
		case 2:
			type = new C;
			break ;		
	}
	return type;

}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "Class: A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "Class: B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "Class: C" << std::endl;
    else
        std::cout << "Class can not be identified." << std::endl;
}

void identify(Base& p)
{
    bool flag = false;
    try
	{
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "A" << std::endl;
        flag = true;
	}
	catch (std::exception &e){}

    try
	{
		B &b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "B" << std::endl;
		flag = true;
	}
	catch (std::exception &e){}
	try
	{
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "C" << std::endl;
		flag = true;
	}
	catch (std::exception &e){}
    if (flag == false)
        std::cout << "Class can not be identified." << std::endl;

}

int main()
{
    Base* obj;

    obj = generate();
    identify(obj);
    identify(*obj);

    delete obj;
}