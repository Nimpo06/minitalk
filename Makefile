# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/15 19:29:12 by sihemayoub        #+#    #+#              #
#    Updated: 2022/04/17 13:50:38 by sihemayoub       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME1 = server

NAME2 = client

all	:
		make -C libft
		gcc -Wall -Werror -Wextra src/server.c libft/libft.a -o $(NAME1)
		gcc -Wall -Werror -Wextra src/client.c libft/libft.a -o $(NAME2)

clean :
		make clean -C libft
		rm -rf server.o client.o

fclean : clean
		 make clean -C libft
		 rm -rf $(NAME1) $(NAME2)

re :	fclean all

bonus : 
		make -C libft
		gcc -Wall -Werror -Wextra bonus/server.c libft/libft.a -o $(NAME1)
		gcc -Wall -Werror -Wextra bonus/client.c libft/libft.a -o $(NAME2)

.PHONY:	all clean fclean re
