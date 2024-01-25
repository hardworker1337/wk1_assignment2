# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bnafia <bnafia@student.42madrid.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/20 18:30:25 by bnafia            #+#    #+#              #
#    Updated: 2024/01/25 14:53:13 by bnafia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_atoi.c ft_memcmp.c ft_strjoin.c  ft_strnstr.c ft_substr.c \
					ft_calloc.c ft_strchr.c ft_strlcpy.c ft_strrchr.c ft_tolower.c \
					ft_memchr.c ft_strdup.c  ft_strncmp.c  ft_toupper.c ft_isalpha.c \
					ft_isalnum.c ft_isdigit.c ft_isascii.c ft_isprint.c ft_strlen.c \
					ft_bzero.c ft_memset.c ft_memcpy.c ft_strtrim.c ft_itoa.c \
					ft_split.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
					ft_putendl_fd.c ft_putnbr_fd.c

OBJS			= $(SRCS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re bonus
