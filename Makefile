# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yusong <42.4.yusong@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/19 22:24:22 by yusong            #+#    #+#              #
#    Updated: 2021/08/09 21:01:40 by yusong           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc
CFLAGS =# -Werror -Wextra -Wall

SRCS =	main.c \
			utils_1.c utils_2.c utils_3.c utils_4.c utils_5.c
OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS) pushswap.h
	$(CC) $(CFLAGS) -o $@ $^

%.o : $.c 
	$(CC) $(CLFAG) -c -o $@ $^

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
