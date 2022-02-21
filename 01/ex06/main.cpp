/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 17:32:18 by maragorn          #+#    #+#             */
/*   Updated: 2021/09/30 17:36:14 by maragorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int argc, char **argv)
{
	Karen karen;
	if (argc == 2)
		karen.complain(argv[1]);
	else
		std::cout << "bad arguments" << std::endl;
	return 0;
}