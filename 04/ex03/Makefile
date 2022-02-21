# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maragorn <maragorn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/04 13:12:37 by maragorn          #+#    #+#              #
#    Updated: 2021/10/07 13:53:54 by maragorn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  =  interface

SRCS = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

OBJS  =  $(SRCS:.cpp=.o)

INCS = AMateria.hpp Character.hpp ICharacter.hpp Cure.hpp Ice.hpp MateriaSource.hpp IMateriaSource.hpp

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