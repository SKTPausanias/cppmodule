# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/19 17:56:04 by mlaplana          #+#    #+#              #
#    Updated: 2020/08/19 18:01:12 by mlaplana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert

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