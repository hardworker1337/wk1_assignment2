# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bnafia <bnafia@student.42madrid.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/20 18:30:25 by bnafia            #+#    #+#              #
#    Updated: 2024/01/28 14:04:49 by bnafia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_atoi.c ft_memcmp.c ft_strjoin.c  ft_strnstr.c ft_substr.c \
					ft_calloc.c ft_strchr.c ft_strlcpy.c ft_strrchr.c ft_tolower.c \
					ft_memchr.c ft_strdup.c  ft_strncmp.c  ft_toupper.c ft_isalpha.c \
					ft_isalnum.c ft_isdigit.c ft_isascii.c ft_isprint.c ft_strlen.c \
					ft_bzero.c ft_memset.c ft_memcpy.c ft_strtrim.c ft_itoa.c \
					ft_split.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
					ft_putendl_fd.c ft_putnbr_fd.c ft_memmove.c ft_strlcat.c \

OBJS			= $(SRCS:.c=.o)

CC				= 	gcc
RM				= 	rm -f
CFLAGS			= 	-Wall -Wextra -Werror -I.

NAME			= 	libft.a

BONUS_SRC 		=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
			  	ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

BONUS_OBJS 		= $(BONUS_SRC:.c=.o)

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

bonus:			$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)	
.PHONY:			all clean fclean re bonus
