# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/06 19:45:18 by mlaplana          #+#    #+#              #
#    Updated: 2020/03/06 19:45:21 by mlaplana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

C++ = clang++

SRC = phonebook.cpp

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	$(C++) $(FLAGS) -o $(NAME) $(SRC)

fclean:
	rm -f $(NAME)

re:		fclean $(NAME)

.PHONY: all fclean re