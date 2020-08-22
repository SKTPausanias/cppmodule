# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/22 15:53:36 by mlaplana          #+#    #+#              #
#    Updated: 2020/08/22 15:54:14 by mlaplana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = identify

C++ = clang++

SRC = main.cpp

OBJS = $(SRC:.cpp=.o)

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	$(C++) $(FLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:		fclean $(NAME)

.PHONY: all fclean re