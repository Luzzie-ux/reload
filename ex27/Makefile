# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/15 15:15:23 by rodrpere          #+#    #+#              #
#    Updated: 2026/04/15 15:22:43 by rodrpere         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a:
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I includes

SRCS = $(wildcard srcs/*.c)
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

.PHONY: all clean fclean