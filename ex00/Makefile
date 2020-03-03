# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlaplana <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/03 13:39:15 by mlaplana          #+#    #+#              #
#    Updated: 2020/03/03 13:47:18 by mlaplana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

C++ = clang++

SRC = megaphone.cpp

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	$(C++) $(FLAGS) -o $(NAME) $(SRC)

fclean:
	rm -f $(NAME)

re:		fclean $(NAME)

.PHONY: all fclean re
