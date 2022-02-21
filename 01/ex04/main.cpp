/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 13:57:52 by maragorn          #+#    #+#             */
/*   Updated: 2021/09/30 14:05:59 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int argc, char **argv)
{   
    value args;
    args.pos = 0;
    args.str = ".replace";

    if (argc == 4)
    {
        args.s1 = argv[2];
        args.s2 = argv[3];
        args.file.open(argv[1]);
        args.filename = argv[1];
        std::transform(args.filename.begin() , args.filename.end(), args.filename.begin(), toupper);
        args.filename = args.filename + args.str;
        if(!args.file)
        {
            std::cout << "file not open" << std::endl;
            return(1);
        }
        args.newfile.open(args.filename);
        while(getline(args.file, args.tmp))
        { 
            args.pos = 0;
            while((args.pos = args.tmp.find(args.s1, args.pos)) != -1)
            {
                args.tmp.erase(args.pos, args.s1.length());
                args.tmp.insert(args.pos, args.s2);
            }
            args.newfile << args.tmp << '\n';        
        }
    }
    else
    {
        std::cout << "bad arguments" << std::endl;
        return(1);
    }    
    return(0);
}

