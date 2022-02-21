# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/29 13:03:07 by maragorn          #+#    #+#              #
#    Updated: 2021/09/29 13:30:20 by maragorn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  =  zombie

SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

OBJS  =  $(SRCS:.cpp=.o)

INCS  =  Zombie.hpp

CPFLAGS  =   -Wall -Wextra -Werror

.cpp.o:
	@clang++ -std=c++98 $(CPFLAGS) -c $< -o $@

$(NAME): $(OBJS) $(INCS)
	@clang++ -std=c++98 $(CPFLAGS) $(OBJS) -o $(NAME)

all:  $(NAME)
   
clean:
	@rm -f $(OBJS)

fclean:  clean
	@rm -f $(NAME)

re:   fclean all

.PHONY:  all clean fclean re