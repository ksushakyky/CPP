/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 12:32:17 by maragorn          #+#    #+#             */
/*   Updated: 2021/10/22 16:29:51 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main()
{
    {
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        std::cout << mstack.top() << std::endl; 
        mstack.pop();
        std::cout << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        //[...]
        mstack.push(0);
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::stack<int> s(mstack);
    }
    std::cout << "---float---" << std::endl;
    {
        MutantStack<float> test;
        for (int i = 0; i < 5; i++)
            test.push(i);
        std::cout << "top:" << test.top() << std::endl; 
        std::cout << "size:" << test.size() << std::endl;
        test.pop();
        std::cout << "-pop-" << std::endl; 
        std::cout << "size:" << test.size() << std::endl;
        MutantStack<float>::iterator it = test.begin();
        MutantStack<float>::iterator ite = test.end();
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
    }
    std::cout << "---string---" << std::endl;
    {
        MutantStack<std::string> test;
        test.push("one");
        test.push("two");
        test.push("three");
        std::cout << "top:" << test.top() << std::endl; 
        std::cout << "size:" << test.size() << std::endl;
        MutantStack<std::string>::iterator it = test.begin();
        MutantStack<std::string>::iterator ite = test.end();
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        test.pop();
        std::cout << "-pop-" << std::endl; 
        std::cout << "top:" << test.top() << std::endl; 
    }
    return 0;
}

