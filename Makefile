# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/15 19:29:12 by sihemayoub        #+#    #+#              #
#    Updated: 2023/10/04 14:18:17 by noalexan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
CFLAGS=-Werror -Wextra -Wall -Ilibft -Ift_printf

TARGET1=server

TARGET1_SRC=$(addprefix src/, server.c)
TARGET1_OBJ=$(TARGET1_SRC:.c=.o)

TARGET2=client

TARGET2_SRC=$(addprefix src/, client.c)
TARGET2_OBJ=$(TARGET2_SRC:.c=.o)

LIBFT=libft/libft.a
LIBFTPRINTF=ft_printf/libftprintf.a

all: $(TARGET1) $(TARGET2)

$(TARGET1): $(LIBFT) $(LIBFTPRINTF) $(TARGET1_OBJ)
	$(CC) $(CFLAGS) $(TARGET1_OBJ) $(LIBFT) $(LIBFTPRINTF) -o $(TARGET1)

$(TARGET2): $(LIBFT) $(LIBFTPRINTF) $(TARGET2_OBJ)
	$(CC) $(CFLAGS) $(TARGET2_OBJ) $(LIBFT) $(LIBFTPRINTF) -o $(TARGET2)

$(LIBFT):
	make -C libft

$(LIBFTPRINTF):
	make -C ft_printf

clean:
	make clean -C libft
	make clean -C ft_printf
	rm -rf $(TARGET1_OBJ) $(TARGET2_OBJ)

fclean: clean
	make fclean -C libft
	make fclean -C ft_printf
	rm -rf $(TARGET1) $(TARGET2)

re:	fclean all

.PHONY:	all clean fclean re
