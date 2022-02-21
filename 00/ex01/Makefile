# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/28 16:19:34 by maragorn          #+#    #+#              #
#    Updated: 2021/09/28 16:19:37 by maragorn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  =  phonebook

SRCS = main.cpp PhoneBook.cpp Contact.cpp

OBJS  =  $(SRCS:.cpp=.o)

CPFLAGS  =   -Wall -Wextra -Werror

INCS =  PhoneBook.hpp Contact.hpp

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