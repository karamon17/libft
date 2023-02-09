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

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	   ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
	   ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strrchr.c ft_strchr.c \
	   ft_calloc.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	   ft_atoi.c ft_strdup.c ft_substr.c ft_strjoin.c ft_itoa.c \
	   ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	   ft_striteri.c ft_strmapi.c ft_strtrim.c ft_split.c 
	   
BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
		ft_lstclear.c ft_lstiter.c ft_lstmap.c

HEADER = libft.h

OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(BONUS:.c=.o)

CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

%.o : %.c  $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(HEADER) $(OBJS)
				ar rcs $(NAME) $(OBJS)

bonus: $(OBJS) $(OBJS_BONUS)
	ar rcs $(NAME) $(OBJS) $(OBJS_BONUS)

clean:
				$(RM) $(OBJS) $(OBJS_BONUS)

fclean:			clean
				$(RM) $(NAME) $(OBJS) $(OBJS_BONUS)

re:				fclean all

.PHONY:			all clean fclean re
