# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/22 16:37:50 by mlaplana          #+#    #+#              #
#    Updated: 2020/08/22 17:30:29 by mlaplana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = templates

C++ = clang++

SRC = whatever.cpp

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