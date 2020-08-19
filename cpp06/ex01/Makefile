# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/19 19:29:53 by mlaplana          #+#    #+#              #
#    Updated: 2020/08/19 19:30:21 by mlaplana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = serialization

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