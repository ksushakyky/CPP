# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/28 12:38:55 by maragorn          #+#    #+#              #
#    Updated: 2021/09/28 12:44:02 by maragorn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  =  megaphone

SRCS = megaphone.cpp

OBJS  =  $(SRCS:.cpp=.o)

CPFLAGS  =   -Wall -Wextra -Werror

.cpp.o:
	clang++ -std=c++98 $(CPFLAGS) -c $< -o $@

all:  $(NAME)

$(NAME): $(OBJS) 
	@clang++ -std=c++98 $(CPFLAGS) $(OBJS) -o $(NAME)
   
clean:
	@rm -f $(OBJS)

fclean:  clean
	@rm -f $(NAME)

re:   fclean all

.PHONY:  all clean fclean re