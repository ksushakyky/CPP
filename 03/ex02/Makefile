# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/05 11:54:45 by maragorn          #+#    #+#              #
#    Updated: 2021/10/05 11:54:46 by maragorn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  =  claptrap

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

OBJS  =  $(SRCS:.cpp=.o)

INCS = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

CPFLAGS  =   -Wall -Wextra -Werror

.cpp.o:
	@clang++ -std=c++98 $(CPFLAGS) -c $< -o $@
	
all:  $(NAME)

$(NAME): $(OBJS) $(INCS)
	@clang++ -std=c++98 $(CPFLAGS) $(OBJS) -o $(NAME)
   
clean:
	@rm -f $(OBJS)

fclean:  clean
	@rm -f $(NAME)

re:   fclean all

.PHONY:  all clean fclean re