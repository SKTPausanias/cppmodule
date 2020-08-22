# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/22 17:52:16 by mlaplana          #+#    #+#              #
#    Updated: 2020/08/22 19:36:12 by mlaplana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter

C++ = clang++

SRC = iter.cpp

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