# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/25 14:13:19 by mayoub            #+#    #+#              #
#    Updated: 2023/10/04 14:25:57 by noalexan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_atoi.c \
		  ft_bzero.c \
		  ft_calloc.c \
		  ft_isalnum.c \
		  ft_isalpha.c \
		  ft_isascii.c \
		  ft_isdigit.c \
		  ft_isprint.c \
		  ft_itoa.c \
		  ft_memchr.c \
		  ft_memcmp.c \
		  ft_memcpy.c \
		  ft_memmove.c \
		  ft_memset.c \
		  ft_putchar_fd.c \
		  ft_putchar.c \
		  ft_putendl_fd.c \
		  ft_putnbr_fd.c \
		  ft_putstr_fd.c \
		  ft_putstr.c \
		  ft_split.c \
		  ft_strchr.c \
		  ft_strdup.c \
		  ft_striteri.c \
		  ft_strjoin.c\
		  ft_strlcat.c \
		  ft_strlcpy.c \
		  ft_strlen.c \
		  ft_strmapi.c\
		  ft_strncmp.c \
		  ft_strnstr.c \
		  ft_strrchr.c \
		  ft_strtrim.c \
		  ft_substr.c \
		  ft_tolower.c \
		  ft_toupper.c \

SRCB	= ft_lstadd_back.c \
		  ft_lstadd_front.c \
		  ft_lstclear.c \
		  ft_lstdelone.c \
		  ft_lstiter.c \
		  ft_lstlast.c \
		  ft_lstmap.c \
		  ft_lstnew.c \
		  ft_lstsize.c \

OBJS	= ${SRCS:.c=.o}

OBJB	= ${SRCB:.c=.o}

NAME	= libft.a

CC		= gcc

CFLAGS	= -Werror -Wall -Wextra

AR		= ar rcs

RM		= rm -rf

${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS} ${OBJB}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

bonus:		${OBJB}
			${AR} ${NAME} ${OBJB}
			ranlib ${NAME}

.PHONY:		all clean fclean re bonus
