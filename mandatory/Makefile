# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cprester <cprester@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/15 19:55:08 by cprester          #+#    #+#              #
#    Updated: 2022/08/15 20:09:36 by cprester         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cub3D

CFLAGS = -Wall -Wextra -Werror
RM = rm -f
SRCS = $(shell find . -type f -name "*.c")
OBJ := $(SRCS:%.c=%.o)
.PHONY = all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CLFAGS) $(OBJ) $(ADDFLAGS) -o $(NAME)

%.o: %.c cub.h gnl/get_next_line.h Makefile
	$(CC) $(CLFAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all


