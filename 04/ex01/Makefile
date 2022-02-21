# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/04 13:12:37 by maragorn          #+#    #+#              #
#    Updated: 2021/10/06 17:36:00 by maragorn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  =  deep_copy

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp

OBJS  =  $(SRCS:.cpp=.o)

INCS = Animal.hpp Cat.hpp Dog.hpp Brain.hpp

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