# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/05 11:53:55 by maragorn          #+#    #+#              #
#    Updated: 2021/10/05 11:53:56 by maragorn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  =  claptrap

SRCS = main.cpp ClapTrap.cpp

OBJS  =  $(SRCS:.cpp=.o)

INCS = ClapTrap.hpp

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