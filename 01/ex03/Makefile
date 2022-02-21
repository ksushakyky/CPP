# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/29 15:18:05 by maragorn          #+#    #+#              #
#    Updated: 2021/09/29 15:26:07 by maragorn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  =  weapon

SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJS  =  $(SRCS:.cpp=.o)

INCS = Weapon.hpp HumanA.hpp HumanB.hpp

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