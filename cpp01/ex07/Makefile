# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/03 15:17:11 by mlaplana          #+#    #+#              #
#    Updated: 2020/07/03 15:17:24 by mlaplana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

C++ = clang++

SRC = replace.cpp

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	$(C++) $(FLAGS) -o $(NAME) $(SRC)

fclean:
	rm -f $(NAME)

re:		fclean $(NAME)

.PHONY: all fclean re
