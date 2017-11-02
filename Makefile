# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ztisnes <ztisnes@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/27 23:25:03 by ztisnes           #+#    #+#              #
#    Updated: 2017/10/27 23:46:51 by ztisnes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

FLAGS = -Wall -Wextra -Werror -o

LIBFT = src/

COMP =	make -C $(LIBFT) re

COMPC = make -C $(LIBFT) clean

COMPF = make -C $(LIBFT) fclean

NAME = knights

SRC = $(LIBFT) libft.a backtrack_knight.c main.c

all: $(NAME)

$(NAME):
			@$(COMP)
			@$(CC) $(FLAG) $(NAME) $(SRCS)

clean:
			@$(COMPC)

fclean: clean
			@$(COMPF)
			@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
