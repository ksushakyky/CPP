# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/11 13:46:41 by maragorn          #+#    #+#              #
#    Updated: 2021/10/19 15:12:24 by maragorn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  =  iter

SRCS = main.cpp

OBJS  =  $(SRCS:.cpp=.o)

INCS = iter.hpp

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