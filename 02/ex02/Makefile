# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/01 13:51:28 by maragorn          #+#    #+#              #
#    Updated: 2021/10/01 17:21:49 by maragorn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  =  fixed

SRCS = main.cpp Fixed.cpp

OBJS  =  $(SRCS:.cpp=.o)

INCS  =  Fixed.hpp

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