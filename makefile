# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gkhaishb <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/20 20:35:02 by gkhaishb          #+#    #+#              #
#    Updated: 2023/01/20 20:35:07 by gkhaishb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= $(wildcard *.c)

OBJS			= $(patsubst %.c, %.o, $(SRCS))

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

%.o : %.c  
	$(CC) -c $< -o $@

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) 

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re
